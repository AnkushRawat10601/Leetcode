


class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int s1=(p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]), s2=(p1[0]-p3[0])*(p1[0]-p3[0])+(p1[1]-p3[1])*(p1[1]-p3[1]), s3=(p3[0]-p2[0])*(p3[0]-p2[0])+(p3[1]-p2[1])*(p3[1]-p2[1]), s4=(p3[0]-p4[0])*(p3[0]-p4[0])+(p3[1]-p4[1])*(p3[1]-p4[1]), s5=(p1[0]-p4[0])*(p1[0]-p4[0])+(p1[1]-p4[1])*(p1[1]-p4[1]), s6=(p4[0]-p2[0])*(p4[0]-p2[0])+(p4[1]-p2[1])*(p4[1]-p2[1]);
        map<int, int>m;
        int cnt1=-1, cnt2=-1, side, diag;
        m[s1]++;
        m[s2]++;
        m[s3]++;
        m[s4]++;
        m[s5]++;
        m[s6]++;
        //cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<endl;
        if(m.size()!=2){return false;}
        for(auto it: m){
            //cout<<it.second<<endl;
            if(cnt1==-1){
                cnt1=it.second;
                side=it.first;
            }
            else if(cnt2==-1){
                cnt2=it.second;
                diag=it.first;
            }
        }
        if(side==0 || diag==0){return false;}
        //cout<<cnt1<<" "<<cnt2<<endl;
        if((cnt1==4 && cnt2==2) || (cnt1==2 && cnt2==4)){return true;}
        return false;
    }
};
