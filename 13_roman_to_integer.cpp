class Solution {
public:
    int romanToInt(string str1) {
        map<char, int> roman;
        roman.insert(pair<char, int>('I', 1));
        roman.insert(pair<char, int>('V', 5));
        roman.insert(pair<char, int>('X', 10));
        roman.insert(pair<char, int>('L', 50));
        roman.insert(pair<char, int>('C', 100));
        roman.insert(pair<char, int>('D', 500));
        roman.insert(pair<char, int>('M', 1000));
        
        int len = str1.length(),num,sum=0;

        for(int i=0;i<len;){
            if(i == (len-1)){
                num = roman[str1[i]];
                i++;
            }
            else if(roman[str1[i]] < roman[str1[i+1]]){
                num = roman[str1[i+1]] - roman[str1[i]];
                i = i+2;
            }
            else{
                num = roman[str1[i]];
                i++;
            }
            sum = sum + num;
        }

        return sum;
    }
};