class Solution {
public:
    int findGCD(vector<int>& nums) {
        
    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    int n=nums.size();
    for (int i = 0; i < n; i++)
    {
        smallest = min(smallest, nums[i]);
        largest = max(largest, nums[i]);
    }
    int GCD = 1;
    for (int i = 1; i <= smallest; i++)
    {
        if (smallest % i == 0 && largest % i == 0)
        {
            GCD = i;
        }
    }
    return GCD;


    }
};