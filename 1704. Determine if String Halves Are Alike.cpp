class Solution {
    bool isVowel(char ch) {
        if(tolower(ch)=='a' || tolower(ch)=='e' || tolower(ch)=='i' || tolower(ch)=='o' || tolower(ch)=='u')
            return true;
        return false;
    }
public:
    bool halvesAreAlike(string s) {
        int count=0, n = s.size();
        for(int i=0;i<(n/2);i++) {
            if(isVowel(s[i]))
                count++;
        }
        for(int i=n/2;i<n;i++) {
            if(isVowel(s[i]))
                count--;
        }
        if(count==0)
            return true;
        return false;
    }
};