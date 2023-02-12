class Solution {
public:
   int findLHS(vector<int>& nums) {
        int ans =0;
        unordered_map<int , int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(int i = 0;i<nums.size();i++)
        {
            if(mp[(nums[i]+1)] )
            {
                int temp = 0;
                temp = mp[nums[i]] + mp[(nums[i]+1)];
                ans = max(ans,temp);
            }
            
        }
        return ans;
        
    }
};