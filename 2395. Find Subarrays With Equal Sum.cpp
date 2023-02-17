class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int, bool> sumExists;
        int i = 1, n = nums.size();
        while (i < n) {
            int sum = nums[i - 1] + nums[i++];
            if (sumExists[sum]) return true;
            else sumExists[sum] = true;
        }
        return false;
    }
};