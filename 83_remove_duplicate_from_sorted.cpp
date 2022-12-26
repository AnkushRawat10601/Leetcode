
struct ListNode* deleteDuplicates(struct ListNode* head) {   
    if(head==NULL)
    {return head;}
    struct ListNode *p=head;
    while(p->next!=NULL)
    {
        if(p->val==p->next->val)
        {
            p->next=p->next->next;
        }else
        {
            p=p->next;
        }
    }
    return head;
}