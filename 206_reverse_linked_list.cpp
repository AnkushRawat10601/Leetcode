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
    ListNode* reverseList(ListNode* head) {
        // Iterative;
        if(head == NULL || head -> next == NULL) return head;
        ListNode* past = NULL;
        ListNode* present = head;
        ListNode* future = head -> next;
        while(future != NULL) {
            present -> next = past;
            past = present;
            present = future;
            future = future -> next;
        }
        present -> next = past;
        return present;
    }
};