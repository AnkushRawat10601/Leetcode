class Solution {
public:
    int countEven(int n) {
        int c=0;
        for(int i=1;i<=n;i++){
            if(n<10){
                if(i%2==0){
                    c++;

                }
            }
            else{
                int nn=i;
                int sum=0;
                while(nn!=0){
                    sum+=nn%10;
                    nn=nn/10;

                }
                if(sum%2==0){
                    c++;
                }
            }
        }
   return c; }
};