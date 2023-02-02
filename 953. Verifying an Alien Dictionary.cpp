class Solution {
public:
     unordered_map<char, int> map;
    bool check(string word1, string word2){
    int n= min(word1.length(), word2.length());
        for(int i=0; i<n; i++){
            if(map[word1[i]]<map[word2[i]]) return true;
            else if(map[word1[i]]>map[word2[i]]) return false;
            
        }
    
        if(word1.size()>word2.size())return false;
        return true;
    
    }
    bool isAlienSorted(vector<string>& words, string order) {
       
    for(int i=0; i< order.length(); i++){
        map[order[i]]= i+1;
    } 
        
    for(int i=0; i< words.size()-1; i++)    
    {
      bool result= check(words[i], words[i+1]);
        if(result==false) return false;
        
        
    }
       
      return true;   
    }
};