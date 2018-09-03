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
    ListNode* insertionSortList(ListNode* head) {
        
        ListNode *sortList = new ListNode(NULL);
        if(head==NULL || head->next==NULL)
            return head;
        while(NULL!=head)
        {
            ListNode *temp = head->next;
            ListNode *cur = sortList;
            
            while(cur->next!=NULL && cur->next->val<head->val)
            {
                cur = cur->next;
            }
            
            head->next = cur->next;
            cur->next = head;
            head = temp;
        }
        return sortList->next;
    }
};