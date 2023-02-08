class Solution
{
public:
    int longestSquareStreak(vector<int> &nums)
    {
        unordered_map<long long, long long> mp;
        for (auto &it : nums)
            mp[it]++;

        int ans = INT_MIN;
        for (auto &it : mp)
        {
            long long to_search = it.first;
            int temp = 0;
            while (mp.find(to_search) != mp.end())
            {
                if (mp.find(to_search) != mp.end())
                {
                    temp++;
                    to_search = to_search * to_search;
                }
            }
            ans = max(temp, ans);
        }
        if (ans == 1 || ans == 0)
            return -1;
        else
            return ans;
    }
};