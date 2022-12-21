int maxSubArray(int* nums, int numsSize) {
    if(numsSize==1)
    {return nums[0];}
    int sum=nums[0];
    int result=sum;
    for(int i=0;i<numsSize-1;i++)
    {
        if(sum<=0)
        {sum=0;}
        sum=sum+nums[i+1];
        if(result<sum)
        {result=sum;}
    }
    return result;
}