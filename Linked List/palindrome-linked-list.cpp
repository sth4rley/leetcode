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
    bool isPalindrome(ListNode* head) {
        
        if (!head->next) return true;

        ListNode *slow = head, *fast = head;

        stack<int> s; // *lista reversa?

        while(fast and fast->next){
            s.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast and !fast->next) slow = slow->next; // impar

        while(s.size()){
            if (slow->val == s.top()) {
                slow = slow->next;
                s.pop();
            } else {
                return false;
            }
        }

        return slow == NULL;
    }
};