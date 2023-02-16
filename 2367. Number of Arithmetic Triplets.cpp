class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(auto i: nums){
            if(mp.find(i-diff) != mp.end() && mp.find(i-2*diff) != mp.end()) ans = ans + mp[i-diff]* mp[i-2*diff];
            mp[i]++;
        }
        return ans;
    }
};
