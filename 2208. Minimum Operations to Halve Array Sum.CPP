class Solution {
public:
    int halveArray(vector<int>& nums) {
        vector<double> copy(nums.size());
        double sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            copy[i] = nums[i];
        }
        sort(copy.begin(),copy.end());
        int i = nums.size()-1;
        double diff = 0;
        int ans = 0;
        double y = (double) sum/2;

        while(i>=0){
            if(diff>=y){
                return ans;
            }
            if(copy[i]<copy[copy.size()-1]){
                sort(copy.begin(),copy.end());
                i = copy.size()-1;
                continue;
            }
            double x = (double)copy[i]/2;
            copy[i] = x;
            diff += x;
            ans++;
            
            if(i==0){
                continue;
            }
            if(copy[i]<copy[i-1]){
                i--;
            }
            
        }
        return ans;
    }
};