class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int idx=0;
        int mini=-1;
        int maxi=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<minK || nums[i]>maxK){
                idx=i+1;
                mini=-1;
                maxi=-1;
            }
            else{
                if(nums[i]==minK){
                    mini=i;
                    
                }
                if(nums[i]==maxK){
                  
                    maxi=i;
                }

                if(maxi!=-1 && mini!=-1){
                    ans+=(min(maxi,mini)-idx+1);
                }
            }
            
        }
        return ans;       
    }
};
