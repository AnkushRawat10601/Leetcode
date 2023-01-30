class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next){
            return NULL;
        }
        unordered_map <ListNode*, int> check;
        while(++check[head] < 2){
            if(head == NULL)
                return NULL;
            head = head->next;
        }
        return head;
    }
};