class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> mp;
        for(auto x: items1) mp[x[0]] += x[1];
        for(auto x: items2) mp[x[0]] += x[1];
        vector<vector<int>> ans;
        for(auto x: mp) {
            ans.push_back({x.first, x.second});
        }
        return ans;
    }
};