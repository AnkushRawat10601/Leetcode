class Solution {
public:
    void dfs(int node, vector<int> &dist, vector<int> &vis, vector<int> adj[])
    {
        vis[node] = 1;
        for (auto i : adj[node])
        {
            if (!vis[i])
            {
                dist[i] = 1 + dist[node];
                dfs(i, dist, vis, adj);
            }
        }
    }

    int closestMeetingNode(vector<int> &edges, int node1, int node2)
    {
        int n = edges.size();
        vector<int> adj[n];
        for (int i = 0; i < n; i++)
            if (edges[i] != -1)
                adj[i].push_back(edges[i]);

        vector<int> dist1(n, 1e9), dist2(n, 1e9);
        dist1[node1] = 0;
        dist2[node2] = 0;

        vector<int> vis1(n);
        dfs(node1, dist1, vis1, adj);

        vector<int> vis2(n);
        dfs(node2, dist2, vis2, adj);

        int mn = 1e9;
        for (int i = 0; i < n; i++)
        {
            if (dist1[i] == 1e9 or dist2[i] == 1e9)
                continue;
            mn = min(mn, max(dist1[i], dist2[i]));
        }

        for (int i = 0; i < n; i++)
        {
            if (dist1[i] == 1e9 or dist2[i] == 1e9)
                continue;
            if (max(dist1[i], dist2[i]) == mn)
                return i;
        }
        return -1;
    }
};