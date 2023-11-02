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

        ListNode * p1 = l1;
        ListNode * p2 = l2;

        ListNode * p3;
        ListNode * current;
        ListNode * prev = nullptr;

        int carry = 0;

        bool first = true;

        while(p1 or p2){
            // l1 cabou-se kkkk
            if(!p1){
                current = new ListNode();
                if(first){
                    p3 = current;
                    first = false;
                } else {
                    prev->next = current;
                }

                    
                int sum = p2->val + carry;
                carry=0;

                if(sum>9){
                    carry = 1;
                    sum-=10;
                }

                current->val = sum;

                p2 = p2->next;
                prev = current;
                current = current->next;
            }
            // p2 cabou-se kkkk
            else if(!p2){
                current = new ListNode();
                if(first){
                    p3 = current;
                    first = false;
                } else {
                    prev->next = current;
                }

                    
                int sum = p1->val + carry;
                carry=0;

                if(sum>9){
                    carry = 1;
                    sum-=10;
                }

                current->val = sum;

                p1 = p1->next;
                prev = current;
                current = current->next;
            }
            // se ainda existe os 2
            else {
                current = new ListNode();
                if(first){
                    p3 = current;
                    first = false;
                } else {
                    prev->next = current;
                }

                int sum = p1->val + p2->val + carry;
                carry=0;

                if(sum>9){
                    carry = 1;
                    sum-=10;
                }

                current->val = sum;

                p1 = p1->next;
                p2 = p2->next;
                prev = current;
                current = current->next;
            }
        }
        
    cout << "carry = "<< carry << endl;
    if(carry){
        current = new ListNode(carry);
        prev->next = current;
    }
    return p3;
    }
};