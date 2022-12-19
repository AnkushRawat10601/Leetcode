int search(int* nums, int numsSize, int target) {
    int flag=-1;
    
    if (target==nums[0]) flag=0;
    if (target==nums[numsSize-1]) flag=numsSize-1;
    
    if (target>nums[0]) {
        for (int i=1;i<numsSize&&nums[i]>nums[i-1];i++) {
            if (target==nums[i]) {
                flag=i;
                break;
            }
        }
    }
    else {
        for (int j=numsSize-2;j>0&&nums[j]<nums[j+1];j--) {
            if (target==nums[j]) {
                flag=j;
                break;
            }
        }
    }
    
    return flag;
}