/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//分成两个链表，然后分别把位置为奇数的归一类，把位置为偶数的归为一类，最后把位置为偶数的链表接在位置为奇数链表的后面。
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL)
            return head;
        ListNode *first = head;
        ListNode *second = head->next;
        ListNode *temp = second;
        while(second!=NULL && second->next!=NULL)
        {
            first->next = second->next;
            first = first->next;
            second->next = first->next;
            second = second->next;
            
        }
        first->next = temp;
        return head;
        
        
  
    }
};