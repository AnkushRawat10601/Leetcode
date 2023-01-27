class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(), n=m?board[0].size():0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int count=0;
                for(int ss=max(i-1, 0); ss<min(i+2, m); ss++){
                    for(int tt=max(j-1, 0); tt<min(j+2, n); tt++){
                        count+=board[ss][tt]&1;
                    }
                }
                count-=board[i][j];
                
                if(count==3 || (board[i][j]&&count==2))
                    board[i][j]|=2;
            }
        }
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                board[i][j]>>=1;
    }
};
}