class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int lo = matrix[0][0], hi = matrix[n-1][n-1];
        int cnt = 0,mid,ans;
        while(lo<=hi){
            mid = ((hi-lo)>>1) + lo;
            cnt = 0;
            ans = lo;
            for(int i = 0, j = n-1; i<n; i++){
                while(j>=0 && matrix[i][j] > mid)
                    j--;
                if(j>=0){
                    cnt += 1+j;
                    ans = max(ans,matrix[i][j]);
                }else{
                    break;
                }
            }

            if(cnt == k){
                return ans;
            }else if(cnt < k){
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return lo;
    }
};