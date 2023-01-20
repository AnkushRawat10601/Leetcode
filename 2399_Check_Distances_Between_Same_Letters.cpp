class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for(int i=0;i<s.length();i++){
            if(distance[s[i]-97]!=-1){
                int next=i+(distance[s[i]-97]+1);

                if((next>=s.length())||(next<s.length() && s[next]!=s[i])){
                    return false;
                }
                distance[s[i]-97]=-1;
            }

        }
        return true;

        
    }
};