class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>> matrix(n,vector<int>(n,1) );
       
        int count = 0 ;
        int total = n*n;
        // indexes
        int left = 0 ; 
        int right = n-1;
        int top=0;
        int down=n-1;
        int value = 1;

        while(count<total){
  
            for(int i=left; count<total && i<=right ;i++){
              matrix[top][i]= value;
              count++;
              value++;
            }
            top++;

             for(int i=top; count<total &&i<=down ;i++){
              matrix[i][right]=value;
            count++;
              value++;
            }
            right--;
            for(int i=right;count<total && i>=left ;i--){
              matrix[down][i]=value;
          count++;
              value++;
            }
            down--;
             for(int i=down;count<total && i>=top ;i--){
              matrix[i][left]=value;
        count++;
              value++;
            }
            left++;
    }
    return matrix;}
};