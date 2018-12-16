class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        if(head==NULL)
            return head;
        ListNode *mid = head;
        ListNode *res = new ListNode(NULL);
        ListNode *cur = res;
        while(mid!=NULL)
        {
            if(mid->val<x)
            {
                ListNode* insertNode = new ListNode(mid->val);
                cur->next = insertNode;
                cur = cur->next;
            }
            mid = mid->next;
            
        }
        mid = head;
        while(mid!=NULL)
        {
            if(mid->val>=x)
            {
                ListNode *insertNode = new ListNode(mid->val);
                cur->next = insertNode;
                cur = cur->next;
            }
            mid = mid->next;
        }
        
        return res->next;
        
    }
};