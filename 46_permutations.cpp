class Solution {
public:
        vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size(); i++){
            vector<int> temp;    
            help(ans, temp, nums, i);
        }
        return ans;
    }
    void help(vector<vector<int>>& ans, vector<int> cur, vector<int> nums, int cur_idx){
        cur.push_back(nums[cur_idx]);
        nums.erase(nums.begin() + cur_idx);
        if(nums.empty()){
            ans.push_back(cur);
            return;
        }
        for(int i = 0; i < nums.size(); i++)
            help(ans, cur, nums, i);
    }
};