class Solution {
public:
    void helper(int idx, vector<int>&nums, vector<int>&temp, set<vector<int>>&ans){
        if(idx >= nums.size()){
            if(temp.size() >= 2){
                ans.insert(temp);
            }
            return;
        }
        if(temp.size() == 0 ||nums[idx]>=temp.back()){
            temp.push_back(nums[idx]);
            helper(idx+1, nums, temp, ans);
            temp.pop_back();
        }
        helper(idx+1, nums, temp, ans);
    }


    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        set<vector<int>> ans;
        helper(0, nums, temp, ans);
        return vector(ans.begin(), ans.end());
    }
};