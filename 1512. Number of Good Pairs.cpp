class Solution {
public:
    int numIdenticalPairs(vector<int>& vec) {
        int count = 0;
        unordered_map<int, int> ump;
        for(int i=0;i<vec.size();i++) {
            if(ump[vec[i]] > 0) {
                count += ump[vec[i]];
            }
            ump[vec[i]]++;
        }
        return count;
    }
};