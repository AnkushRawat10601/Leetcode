class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> pn;
        vector<int> t=nums;
        do
        {
            pn.push_back(nums);
            nextPermutation(nums);
        }
        while(nums!=t);
        return pn;
    }
    void nextPermutation(vector<int>& nums) {
        int bp=-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                bp=i;
                break;
            }
        }
        if(bp<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>bp;i--)
        {
            if(nums[i]>nums[bp])
            {
                swap(nums[bp],nums[i]);
                reverse(nums.begin()+bp+1,nums.end());
                return;
            }
        }
    }
};