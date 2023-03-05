class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return 0;
        unordered_map<int, vector<int>> indices;
        for (int i = 0; i < n; i++) {
            indices[arr[i]].push_back(i);
        }
        vector<int> visited(n);
        visited[0] = true;
        queue<int> q;
        q.push(0);
        int steps = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int curr = q.front();
                q.pop();
                if (curr == n - 1) return steps;
                if (curr + 1 < n && !visited[curr + 1]) {
                    visited[curr + 1] = true;
                    q.push(curr + 1);
                }
                if (curr - 1 >= 0 && !visited[curr - 1]) {
                    visited[curr - 1] = true;
                    q.push(curr - 1);
                }
                for (int nextIndex : indices[arr[curr]]) {
                    if (nextIndex != curr && !visited[nextIndex]) {
                        visited[nextIndex] = true;
                        q.push(nextIndex);
                    }
                }
                indices[arr[curr]].clear();
            }
            steps++;
        }
        return -1;
    }
};
