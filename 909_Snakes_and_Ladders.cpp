class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        
        // store the position of each cell in a map
        map<int,pair<int,int>> mp;
        int goal = 1;
        int t = 1;
        for(int i=n-1; i>= 0; i--){
            if(t == 0){
                for(int j=n-1 ; j>=0 ; j--){
                    mp[goal++] = {i, j};
                }
            }
            else{
                for(int j=0; j< n; j++){
                    mp[goal++] = {i, j};
                }
            }
            
            t ^= 1;
        }
        
        // Visited Array to mark the cell we have already visited
        vector<int> vis(n*n + 1 , 0);
        queue<int> q;
        q.push(1);
        
        goal = (n*n);
        int move = 0;
        
        while(q.size()){
            int sz = q.size();
            
            while(sz--){
                int cur = q.front(); q.pop();
                
                if(cur == goal ) return move; // Goal is Reached then return the number of moves
                
                vis[cur] = 1;
                
                
                
                for(int next = cur + 1 ; next <= min(cur + 6,goal) ; next++  ){
                    
                    
                    auto pos = mp[next];
                    
                    
                    // Case : The Cell has a Ladder or Snake
                    if(board[pos.first][pos.second] != -1){
                        int nxx = board[pos.first][pos.second];
                        if(!vis[nxx]){
                            q.push(nxx);
                            vis[nxx] = 1;
                        }
                    }
                    
                    // Case : The Cell doesn't have any Ladder or Snake
                    else{
                        if(!vis[next]){
                            q.push(next);
                            vis[next] = 1;
                        }
                    }
                }
                
                
            }
            
            move++;
        }
        
        return -1;
    }
};