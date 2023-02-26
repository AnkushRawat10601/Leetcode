class Solution {
public:
    int minDistance(string word1, string word2) 
    {
        int n=word1.size();
        int m=word2.size();
        int h[n+1][m+1];
        for(int i=0;i<m+1;i++)
        {
           h[0][i]=i;
        }
        for(int i=0;i<n+1;i++)
        {
           h[i][0]=i;
        }
        for(int i=1;i<n+1;i++)
        {
           for(int j=1;j<m+1;j++)
           {
              if(word1[i-1]==word2[j-1])
              {
                 h[i][j]=h[i-1][j-1];
              }
              else
              {
                 h[i][j]=min(1+h[i-1][j-1],min(1+h[i-1][j],1+h[i][j-1]));
              }
           }
        }
        return h[n][m];
    }
};
