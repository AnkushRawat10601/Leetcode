class Solution 
{
public:
    int differenceOfSum(vector<int>& nums) 
    {
        int sum1=0, sum2=0;
        for(auto it:nums)
        {
            sum1 += it;
            while(it)
            {
                sum2 += it%10;
                it /= 10;
            }
            
        }
        return abs(sum1 - sum2);
    }
};