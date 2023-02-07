class Solution {
public:
    int minimumOperations(vector<int>& nums) {
    
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]-sum==0)
            continue;
        else
        {
            sum+=(nums[i]-sum);
            count++;
        }
    }
    
    return count;
}
};