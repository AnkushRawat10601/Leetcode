class Solution {
public:
     double calculateTax(vector<vector<int>>& brackets, int income) {
        double ans=0;  
        if(income==0){
            return ans;
        }
        int prev=0; 
        for(int i=0;i<brackets.size();i++){
            int actual=min(brackets[i][0],income);
            ans+=((actual-prev)*brackets[i][1]*1.0)/100.0;
            if(brackets[i][0]>=income){
                break;
            }
            prev=brackets[i][0];
        }
        return ans;
        
    }
};
