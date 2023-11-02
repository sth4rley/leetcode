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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode * res;
        ListNode * current;
        ListNode * prev = nullptr;

        int carry = 0;

        bool first = true;

        while(l1 or l2){
            // l1 cabou-se kkkk
            if(not l1){
                current = new ListNode();
                if(first){
                    res = current;
                    first = false;
                } else {
                    prev->next = current;
                }

                    
                int sum = l2->val + carry;
                carry=0;

                if(sum>9){
                    carry = 1;
                    sum-=10;
                }

                current->val = sum;

                l2 = l2->next;
                prev = current;
                current = current->next;
            }
            // l2 cabou-se kkkk
            else if(not l2){
                current = new ListNode();
                if(first){
                    res = current;
                    first = false;
                } else {
                    prev->next = current;
                }

                    
                int sum = l1->val + carry;
                carry=0;

                if(sum>9){
                    carry = 1;
                    sum-=10;
                }

                current->val = sum;

                l1 = l1->next;
                prev = current;
                current = current->next;
            }
            // se ainda existe os 2
            else {
                current = new ListNode();
                if(first){
                    res = current;
                    first = false;
                } else {
                    prev->next = current;
                }

                int sum = l1->val + l2->val + carry;
                carry=0;

                if(sum>9){
                    carry = 1;
                    sum-=10;
                }

                current->val = sum;

                l1 = l1->next;
                l2 = l2->next;
                prev = current;
                current = current->next;
            }
        }
        
    // se sobrou um carry
    if(carry){
        current = new ListNode(carry);
        prev->next = current;
    }

    return res;
    }
};