class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>temp;
        arr.push_back(7867877);
        int n=arr.size();
        int pointer=0;
        int i=1;
        while(temp.size()<=k){ 
         if(i==arr[pointer] && pointer!=n){ 
       
           pointer++;
         
         }
         else{   
             temp.push_back(i);
         }
         i++;
        }
        return temp[k-1];
    }
};
