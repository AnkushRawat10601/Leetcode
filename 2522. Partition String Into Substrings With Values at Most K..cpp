class Solution {
public:
    int minimumPartition(string s, int k) {
        int ans = 0;
        long long t = 0;
        for(auto c: s){
            long long r = t*10 + c-'0';
            if(r <= k) t = r;
            else{
                ans++;
                t = 0;
                r = c - '0';
                if(r <= k) t = r;
                else return -1;
            }
        }
        if(t <= k) ans++;
        return ans;
    }
};
