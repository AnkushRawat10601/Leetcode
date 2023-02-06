class Solution {
public:
    int numberOfMatches(int n) {
        int total=0;
 while(n>=2){
     if(n%2==0){
        total+=n/2;
        n=n/2;
     }
     else{
        total+=(n-1)/2;
        n=(n+1)/2; 
     }
 }
 return total;
    }
};