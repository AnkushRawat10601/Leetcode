class Solution {
public:
    
    void add(string &s, int &n, string c, int j)
    {
        int count = n/j;
        while(count--)
            s += c;
        n %= j;
    }    
    
    string intToRoman(int n) 
    {        
        string s;
        add(s, n, "M", 1000);        
        add(s, n, "CM", 900);        
        add(s, n, "D", 500);        
        add(s, n, "CD", 400);        
        add(s, n, "C", 100);        
        add(s, n, "XC", 90);        
        add(s, n, "L", 50);        
        add(s, n, "XL", 40);        
        add(s, n, "X", 10);        
        add(s, n, "IX", 9);   
        add(s, n, "V", 5);        
        add(s, n, "IV", 4);   
        add(s, n, "I", 1);   
        return s;
    }
};