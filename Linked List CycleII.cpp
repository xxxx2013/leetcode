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
    ListNode *detectCycle(ListNode *head) {
        ListNode *p = head;
        ListNode *tail = head;
      
      while(p != NULL && p->next != NULL)
        {
            p = p->next->next;
            tail = tail->next;
            if(p == tail)
               break;
        }
        
        tail = head;
        if(p == NULL || p->next ==NULL)
            return NULL;
        while(p != tail)
        {
            p = p->next;
            tail = tail->next;
        }
        
        return tail;
        
    }
};