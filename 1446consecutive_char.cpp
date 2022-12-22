class Solution {
public:
    int maxPower(string s) {
        int tempCount = 1,maxcount = 1,i=1;
        if(s.length()==1) return 1;
        while(s[i]!='\0'){
            if(s[i-1]==s[i]) tempCount++;
            else tempCount = 1;
            if(maxcount < tempCount) maxcount = tempCount;
            i++;
        }
        return maxcount;
    }
};