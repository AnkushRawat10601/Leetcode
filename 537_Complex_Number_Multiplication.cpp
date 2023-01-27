class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        
        string r1 , r2 , c1 , c2;
        
        int i = 0 ;
        while(num1[i] != '+')
            r1.push_back(num1[i++]);
        i++;
        
        while(num1[i] != 'i')
            c1.push_back(num1[i++]);
        
        i = 0;
        
        while( num2[i] != '+')
            r2.push_back(num2[i++]);
        i++;
        
        while(num2[i] != 'i')
            c2.push_back(num2[i++]);
        
        
        int x1 = stoi(r1);
        int x2 = stoi(r2);
        int y1 = stoi(c1);
        int y2 = stoi(c2);
        
        int ans_real = x1 * x2 - y1 * y2;
        int ans_img  = x1 * y2 + x2 * y1;
        
        string ans = to_string(ans_real)+ "+" + to_string(ans_img)+"i";
        return ans;
        
        
    }
};