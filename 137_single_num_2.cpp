int singleNumber(int* nums, int numsSize){

    int moves=0,i,j,flag=0;
    for(i=0;i<numsSize-1;i++)
    {
        flag=0;
        for(j=0;j<numsSize-i-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    if(numsSize==1)
    {
        return nums[0];
    }
    for(int i=0;i<numsSize;i++)
    {
        if(i==numsSize-1)
        {
            return nums[numsSize-1];
        }
        if(nums[i]!=nums[i+1]&&nums[i]!=nums[i+2])
        {
            return nums[i];
        }
        i++;
        i++;
    }
    return 0;
}