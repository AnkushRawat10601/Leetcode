
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int last = nums.size()-1;
        // First: Move all zeros to the left
        for(int i=0,j=0;j<nums.size();j++){
            if(nums[j] == 0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        //Second: move the 2's to the right
        for(int i=last,j=last;j>=0;j--){
            if(nums[j] == 2){
                swap(nums[j],nums[i]);
                i--;
            }
        }
     
    }
};