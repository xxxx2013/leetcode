/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
1. 使用快慢指针来找到链表的中点，并将链表从中点处断开，形成两个独立的链表。
2. 将第二个链表翻转。
3. 将第二个链表的元素间隔地插入第一个链表中。
*/
class Solution {
public:
    void reorderList(ListNode* head) {
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        //if (!head || !head->next || !head->next->next) return;
        if(head == NULL || head->next == NULL || head->next->next == NULL)
            return;
        
        while(fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
        }
        ListNode *midlist = slow->next;
        slow->next = NULL;
        ListNode *current = midlist;
        ListNode *reverse = NULL;
        
        while(current != NULL)
        {
            ListNode *temp = current->next;
            current->next = reverse;
            reverse = current;
            current = temp;
        }
        
        while(head && reverse)
        {
            ListNode *temp1 = head->next;
            head->next = reverse;
            reverse = reverse->next;
            head->next->next = temp1;
            head = temp1;
        }
        
    }
    
};