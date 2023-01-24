class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int arr[32]={0};
        int i=0;
        while(n!=0){
            int rem=0;
            rem=n%2;
             arr[i]=rem;
              n=n/2;
              i++;
    }

        long long ans=0;
        for(int i=0;i<32;i++){
            ans+=arr[i]*pow(2,32-1-i);
        }
        return ans;
    }
};