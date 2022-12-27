class Solution {
public:
    bool canWinNim(int n) 
    { 
        return !(n == ((n >> 2) << 2)); 
    }
};