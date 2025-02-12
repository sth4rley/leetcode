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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * current = head;
        ListNode * prev = head;

        while(current){
            if (current != prev){
                if (current->val == prev->val) prev->next = current->next;
                else prev = prev->next;
            }
            current = current->next;
        }
        return head;
    }
};