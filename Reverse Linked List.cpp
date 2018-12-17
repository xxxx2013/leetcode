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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* dummyhead = NULL;
        ListNode* cur = head;
        while(cur!=NULL)
        {   
            ListNode* next = cur->next;
            cur->next = dummyhead;
            dummyhead = cur;
            cur = next;
        }
        return dummyhead;
    }
};