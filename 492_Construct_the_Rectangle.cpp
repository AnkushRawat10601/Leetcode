class Solution {
public:
    vector<int> constructRectangle(int area) {
        int ans=0;
        int l=1;
        int breadth=1;
        for(int b=1;b<=sqrt(area);b++){
            if(area%b==0){
                l=area/b;
                breadth=b;
            }
        }
        return {l,breadth};
    }
};