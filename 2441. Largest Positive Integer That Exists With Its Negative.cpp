class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int, set<int>> mp;
        for(auto &it: nums) {
            mp[abs(it)].insert(it);
        }
        int maxi = INT_MIN;
        
        for(auto &it: mp) {
            if(it.second.size() == 2) {
                maxi = max(it.first, maxi);
            }
        }
        return maxi == INT_MIN ? -1 : maxi;
    }
};