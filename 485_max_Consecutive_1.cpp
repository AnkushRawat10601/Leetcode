class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0;
        int curr=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                curr++;
            else
            {
                res = max(res,curr);
                curr = 0;
            }
        }
        res = max(res,curr);
        return res;
    }
};