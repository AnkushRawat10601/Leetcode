class Solution {
public:
     void merge(vector<int>& arr, int m, vector<int>& arr2, int n) {
      int i=m-1,j=n-1,k=m+n-1;
      while(j>=0 ){
         arr[k--]=(i<0 || arr[i]<arr2[j])?arr2[j--]:arr[i--];
      }
    }
};