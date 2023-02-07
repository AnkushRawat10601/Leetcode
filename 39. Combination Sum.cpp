class Solution {
public:
    void f(int i,vector<vector<int>>&res, vector<int>& arr, vector<int>& temp, int tar ){
        
        if(i==arr.size()){
           if(tar==0){
                res.push_back(temp);
                }
            return;
        }

        if(tar>=arr[i]){
            temp.push_back(arr[i]);
            f(i,res,arr,temp,tar-arr[i]);
            temp.pop_back();
        }
        
            f(i+1,res,arr,temp,tar);
            
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>res;
        vector<int> temp;
        f(0,res,arr,temp,target);
        return res;
    }
};