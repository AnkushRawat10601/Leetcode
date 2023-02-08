


class Solution {
public:
    
    
    int distance(vector&p1,vector&p2)
{
return (p1[0]-p2[0])(p1[0]-p2[0]) + (p1[1]-p2[1])(p1[1]-p2[1]);

}
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
     
   
    set<int>set;
    set.insert(distance(p1,p2));
    set.insert(distance(p1,p3));
    set.insert(distance(p1,p4));
    set.insert(distance(p2,p3));
    set.insert(distance(p2,p4));
    set.insert(distance(p3,p4));
   
    
    if(!set.count(0) and set.size()==2)return true;
    
    return false;
    
    
}
};
