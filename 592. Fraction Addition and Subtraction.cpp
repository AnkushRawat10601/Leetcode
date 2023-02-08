class Solution {
public:
string fractionAddition(string exp) {
int nu=0, du=1;
int i=0, n=exp.size();
int sign=1;
while(i<n)
{
int x=0,y=0;
if(exp[i]=='+') sign=1, i=i+1;
else if(exp[i]=='-') sign= -1, i=i+1;
while( i<n and exp[i]>='0' and exp[i]<='9' )x= 10*x+exp[i++]-'0';

        i++;
         while(i<n and exp[i]>='0' and exp[i]<='9' )
            y=y*10 + exp[i++]-'0';
     
        x*=sign;
        
        nu= nu*y+du*x;
        du*=y;
        
    
        if(!nu)
        {
            du=1;
        }
        else
        {
            int gcd= __gcd(abs(nu),du);
            nu/=gcd;
            du/=gcd;
        }
  
            
    }
     return to_string(nu)+"/"+to_string(du);
}
};