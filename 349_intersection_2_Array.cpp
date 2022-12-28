class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> h;
        for(auto n1: nums1) h[n1] = 1;
        for(auto n2: nums2){
            if(h.find(n2) != h.end() && h[n2] == 1){
                ans.push_back(n2);
                h[n2]--;
            }
        }
        return ans;
    }
};