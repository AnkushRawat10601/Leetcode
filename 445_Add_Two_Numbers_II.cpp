class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev= NULL;
        ListNode* curr= head;
        while (curr){
            ListNode* forward= curr->next;
            curr->next= prev;
            prev= curr;
            curr= forward;
        }
        return prev;
    }
    ListNode* add(ListNode* l1, ListNode* l2){
        ListNode* head= new ListNode(-1);
        ListNode* curr= head;
        int carry=0;
        while (l1 || l2 || carry>0){
            int v1=0, v2=0;
            if (l1)v1= l1->val;
            if (l2)v2= l2->val;
            int sum= v1+v2+carry;
            carry= sum/10;
            sum= sum%10;
            curr->next= new ListNode(sum);
            curr= curr->next;
            if (l1)l1= l1->next;
            if (l2)l2= l2->next;
        }
        head= head->next;
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1= reverse(l1);
        l2= reverse(l2);
        ListNode* ans= add(l1,l2);
        ans= reverse(ans);
        return ;
    }
};