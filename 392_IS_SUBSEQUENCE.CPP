class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int y=s.size();
        for(int i=0;i<t.size();i++)
        {
            if(s[j]==t[i])
            {
                j++;
            }
            if(j==y)
            {
                return true;
            }
        }
        if(j==y)
            return true;
        else
            return false;
    }
};