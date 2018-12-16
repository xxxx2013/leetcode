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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* dummeyhead = new ListNode(NULL);
        dummeyhead->next = head;
        ListNode* cur = dummeyhead;
        while(cur->next!=NULL)
        {
            if(cur->next->val == val)
            {
                ListNode *delNode = cur->next;
                cur->next = delNode->next;
                delete delNode;
            }
            else
                cur = cur->next;
        }
        return dummeyhead->next;
    }
};