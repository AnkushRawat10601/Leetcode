class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int ind = 0;
    for (auto it : nums) 
    {
        if (ind < 2 or it > nums[ind-2]) 
        {
            nums[ind++] = it;
        }
    }
    return ind; 
    }
};