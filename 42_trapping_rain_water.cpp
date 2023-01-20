class Solution {
public:
    int trap(vector<int>& nums) {
        int n= nums.size();
        int a[n];
        int b[n];

        a[0]= nums[0];
        b[n-1]= nums[n-1];
        for(int i=1; i<n; i++)
        {
            a[i]= max(a[i-1], nums[i]);
        }
        for(int i= (n-2); i>=0; i--)
        {
            b[i]= max(b[i+1], nums[i]);
        }
        int sum=0;

        for(int i=0; i<n; i++)
        {
            sum= sum + (min(a[i], b[i])) - nums[i];
        }
        return sum;
    }
};