class Solution {
public:
    vector<vector<string>>ans;
    bool isPalindrome(string& s,int i,int j){
    
        while(i<j){
            if(s[i++]!=s[j--])return false;
        }
        return true;
    }
     

    void generate(string& s,int start, vector<string>&temp){
          if(s.size()==start){
             ans.push_back(temp); 
             return;
          }

          for(int i=start;i<s.length();i++){
              if(isPalindrome(s,start,i)){
                  temp.push_back(s.substr(start,i-start+1));
                  generate(s,i+1,temp);
                  temp.pop_back();
              }
          }
          
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        generate(s,0,temp);
       
        return ans;
    }
};