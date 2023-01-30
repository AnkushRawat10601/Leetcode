class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int hash[101];
        memset(hash, 0, sizeof(hash));
        
        for(auto x:nums){
            hash[x]++;
        }
        int a = 0, b = 0;
        for(int i = 0;i<=100;i++){
            if(hash[i]==0) continue;
            
            a += hash[i]/2;
            b += hash[i]%2;
        }
        return {a,b};
    }
};