class Solution {
public:
    int numSquares(int n) {
        vector<int> res(n + 1, 0);
        res[1] = 1;
        for(int i = 2; i < res.size(); ++i)
        {   
            int minnum = INT_MAX;
            for(int j = 1; j * j <= i; ++j)
            {
                minnum = min(minnum, res[i - j * j] + 1);
            }
            res[i] = minnum;
        }
        return res[n];
        
    }
};