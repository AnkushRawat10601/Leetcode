class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        auto numsSize = nums.size();
        
        if(numsSize < 1) return 0; 
        
        int counter = 0;
        
        for(int i  = 0; i < numsSize - 1; i++)
            if(nums[i]!= nums[i+1]) nums[counter++] = nums[i];
        nums[counter++] = nums[numsSize-1];
        
        return counter;
    }
};