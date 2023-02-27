class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        
        int n = nums1.size();
        int m = nums2.size();
        
        map<int, int> mp;
        for(auto el : nums1){
            mp[el[0]] += el[1];
        }
        
        for(auto el : nums2){
            mp[el[0]] += el[1];
        }
        
        for(auto p : mp){
            ans.push_back({p.first, p.second});
        }
        
        return ans;
    }
};
