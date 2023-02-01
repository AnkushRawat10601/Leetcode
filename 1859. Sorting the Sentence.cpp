class Solution {
public:
    string sortSentence(string s) {
        vector<string>arr(10);
        string temp;
        for(int i = 0; i < s.length(); i++){
            if( s[i] >= '0' and s[i] <= '9'){
                arr[s[i] - '1'] = temp + " ";
                temp = "";
                i++;
            }
            else{
                temp += s[i];
            }
        }
        string ans = "";
        for(auto i : arr){
            ans += i ;
        }
        ans.pop_back();
        return ans;
    }
};