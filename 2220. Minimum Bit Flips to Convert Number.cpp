class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<32> bs1(start);
        bitset<32> bs2(goal);
        int cnt=0;
        for(int i=0;i<32;i++){
            if(bs1[i]!=bs2[i]){
                cnt++;
            }
        }
        return cnt;

        
    }
};
