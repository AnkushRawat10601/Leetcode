class Solution
{
public:
    long long countBadPairs(vector<int> &nums)
    {
        unordered_map<int, long long> count;
        long long n = nums.size(), equal = 0;
        for (int i = 0; i < n; ++i)
            count[nums[i] - i]++;
        for (auto &it : count)
            equal += ((it.second * (it.second - 1)) / 2);
        long long total = (n * (n - 1)) / 2;
        return total - equal;
    }
};