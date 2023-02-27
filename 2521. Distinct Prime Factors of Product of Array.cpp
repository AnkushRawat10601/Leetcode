class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>st;
        vector<int>primes,v;
        vector<bool>mark(1001, 1);
        for(int i = 2; i <= 1000; i++){
            if(mark[i]){
                v.push_back(i);
                for(int k = i * i; k <= 1000; k+= i) mark[k] = 0;
            }
        }
        for(auto it: nums){
            for(int i = 0; i < v.size(); ++i){
                if(it % v[i] == 0) st.insert(v[i]);
            }
        }
    
        return (int)st.size();
        
        
    }
};
