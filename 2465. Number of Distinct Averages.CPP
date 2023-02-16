class Solution {
public:
   int distinctAverages(vector<int>& nums) {
        unordered_set<float> s;
        sort(nums.begin(), nums.end()); 
        
        int i = 0, j = size(nums)-1;
        while (i < j) 
            s.insert((float)(nums[i++] + nums[j--])/2);
        
        return size(s);
    }
};