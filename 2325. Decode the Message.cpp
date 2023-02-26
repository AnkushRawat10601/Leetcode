class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char,int>freq;
        unordered_map<char,char>distable;
        char count='a';

        for(int i=0;i<key.size();i++){
            if(key[i]==' '){
                continue;
            }
            freq[key[i]]+=1;
            if(freq[key[i]]>1){
                continue;
            }
            else
            distable[key[i]]=count;
            count+=1;
        }
        for(int i=0;i<message.size();i++){
            if(message[i]==' '){
                message[i]=' ';
            }
            else
            message[i]=distable[message[i]];
        }
        return message;
    }
};
