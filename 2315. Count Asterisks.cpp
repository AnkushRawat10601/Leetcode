class Solution {
public:
    int countAsterisks(string s) {
        int bar = 0,count=0;
        for(int i = 0; i < s.size();i++)
        {
            if(bar%2 == 0 && s[i] == '*')
                count++;
            if(s[i] == '|')
                bar++;
        }
        return count;
    }
};