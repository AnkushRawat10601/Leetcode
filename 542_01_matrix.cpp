class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};
        while(q.empty()==false){
            int i=q.front().first.first;
            int j=q.front().first.second;
            int d=q.front().second;
            q.pop();
            dis[i][j]=d;
            for(int k=0;k<4;k++){
                int nc=dc[k]+j;
                int nr=dr[k]+i;
                if(nc>=0 && nr>=0 && nr<n && nc<m && vis[nr][nc]==0){
                    vis[nr][nc]=1;
                    q.push({{nr,nc},d+1});
                }
            }
        }
        return dis;
    }
};