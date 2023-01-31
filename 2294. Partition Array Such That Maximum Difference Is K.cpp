class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int j=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[j]>k){
                cnt++;
                j=i;
            }
        }
        cnt++;
        return cnt;
    }
};