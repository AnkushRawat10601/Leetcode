class Solution {
public:
    void deleteNode(ListNode* node) {
            
        ListNode* prev = nullptr;
        while(node->next) {
            node->val = node -> next -> val;
            prev = node;
            node = node->next;
        }

        prev->next = nullptr;
    }
};