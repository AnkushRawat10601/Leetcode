class Solution {
public:
    int countSubstrings(string s) {

        int res=0;

        for(int i =0;i<s.size();i++)
        {
            helper(s,i,i,res);
            helper(s,i,i+1,res);
        }

        return res;
        
    }

    void helper(string s, int i, int j, int &res){

        while(i>=0 && j<s.size() && s[i]==s[j])
        {
            res++;
            i--;
            j++;
        }

    }
};