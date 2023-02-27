class Solution {
public:
    int minMaxDifference(int number) {
        string num1= to_string(number);
        string num2=to_string(number);
        
        char c=num1[0],ch=num1[0];
        
        for(int i=0; i<num1.size(); i++)
        {
            if(num1[i]!='9'){
                c=num1[i];
                break;
            }
        }
        
        for(int i=0; i<num1.size(); i++)
        {
            if(num1[i]==c) num1[i]='9';
        }
        
        for(int i=0; i<num1.size(); i++)
        {
            if(num2[i]==ch) num2[i]='0';
        }
        
        int max_num=stoi(num1);
        int min_num=stoi(num2);
        return max_num -min_num;
    }
};
