/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        int i, cnt=0;
        vector<int>a;
        vector<int>b;
        ListNode* t=head,*p;
        while(t!=0)
        {
           
            cnt++;
            if(cnt%2!=0)
            {
                a.push_back(t->val);
            }
            else
            {
               b.push_back(t->val) ;
               
            }
            t=t->next;

        }
        b.insert(b.begin(),a.begin(),a.end()); 
        t=head;
        i=0;
        while(t!=0)
        {
            t->val=b[i];
            i++;
            t=t->next;
        }
       return head;
    }
};