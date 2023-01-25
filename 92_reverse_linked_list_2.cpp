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
ListNode *reverse(ListNode *li,ListNode *ri,ListNode *prev){
    ListNode *forw=NULL;
    while(li!=NULL){
        forw=li->next;
        li->next=prev;
        prev=li;
        li=forw;
    }
     return ri;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        left--;
        right--;
        ListNode *le=head,*ri=head,*s=head;
        if(left==0) s=NULL;
        while(left!=0){
            s=le;
          le=le->next;
            left--;
        }
        while(right!=0){
            right--;
            ri=ri->next;
        }
        ListNode *prev=ri->next;
        ri->next=NULL;
        ListNode *change=reverse(le,ri,prev);
        if(s==NULL) return change;
        s->next=change;
        return head;
    }
};