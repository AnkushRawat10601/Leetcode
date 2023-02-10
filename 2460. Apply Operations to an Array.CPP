class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
       
        int j =0;
        for(int i =0;i<nums.size()-1;i++)
        {
            if (nums[i]==nums[i+1])
            {
            nums[i]=(nums[i]*2);
            nums[i+1]=0;
            }
            else 
            {
                nums[i];
            }
        }
        for(int i =0;i<nums.size();i++)
        {
                
            if( i==j && nums[i]!=0)
         {
             j++;
             continue;
         }
         if (nums[i]!=0)
         {
             nums[j]=nums[i];
             nums[i]=0;
             j++;
         }
        
     }
    
        return nums;
    }
};