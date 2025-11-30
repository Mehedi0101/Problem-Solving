/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(!head) return false;
        
        ListNode *a = head, *b = head->next;

        while(a->next && b->next && b->next->next){
            if(a == b) return true;
            a = a->next;
            b = b->next->next;
        }

        return false;
    }
};