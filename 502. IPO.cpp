
class Solution {
public:

    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        priority_queue<pair<int,int>>mxh;
        priority_queue<pair<int,int> ,vector<pair<int,int>>, greater<pair<int,int>>>mnh;

        for(int i=0;i<capital.size();++i)
            mnh.push({capital[i], profits[i]});   
    
        while(k > 0)
        {
           while(!mnh.empty() && mnh.top().first<=w)
           {
               auto p = mnh.top();
               mnh.pop();
               mxh.push({p.second, p.first});
           }
           if(!mxh.empty())
           {
               w += mxh.top().first;
               mxh.pop();
               k--;
           }
           else break;  
        }

        return w;

    }
};
