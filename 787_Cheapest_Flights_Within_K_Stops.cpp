class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        unordered_map<int, vector<pair<int, int>>> graph;
        for(auto e: flights) graph[e[0]].push_back({e[1], e[2]});
        vector<int> prices(n, -1);
        queue<pair<int, int>> q; q.push({src, 0});
        ++K;
        while(!q.empty()) {
            if(!K) break;
            int len = q.size();
            for(int i = 0; i < len; i++) {
                auto cur = q.front(); q.pop();
                for(auto e: graph[cur.first]) {
                    int price = cur.second + e.second; 
                    if(prices[e.first] == -1 || price < prices[e.first]) {
                        prices[e.first] = price;
                        q.push({e.first, price});
                    }
                }
            }
            K--;
        }
        return prices[dst];
    }
};