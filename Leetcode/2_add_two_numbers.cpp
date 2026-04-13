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
        ListNode* ans = new ListNode(0);

        ListNode* p = ans;

        int carry = 0;

        while (l1 || l2 || carry) {


            int v1 = (l1 ? l1->val : 0);
            int v2 = (l2 ? l2->val : 0);

            int sum = carry+v1+v2;
            
            carry = (sum / 10);

            int x = sum%10;

            p->next = new ListNode(x);

            p = p->next;

            if(l1) l1 = l1->next;

            if(l2) l2 = l2->next;
        }

        return ans->next;
    }
};
