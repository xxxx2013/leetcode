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
        
        ListNode *tail = head;
        ListNode *p = head;
        if(head == NULL)
            return false;
        if(head->next == NULL)
            return false;
        while(p != NULL && p->next != NULL)
        {
            p = p->next->next;
            tail = tail->next;
            if(p == tail)
                return true;
        }
        return false;
    }
};