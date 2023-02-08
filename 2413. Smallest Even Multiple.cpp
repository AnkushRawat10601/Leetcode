class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(!(n%2)) return n;
        return n*2;
    }
};