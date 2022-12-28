class Solution {
public:
    unordered_set<char> const c_vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;
        while (true) {
            while (l < r && c_vowels.find(s[l]) == c_vowels.end()) ++l;
            while (r > l && c_vowels.find(s[r]) == c_vowels.end()) --r;
            if (l >= r) break;
            swap(s[l], s[r]);
            ++l;
            --r;
        }
        return s;
    }
};