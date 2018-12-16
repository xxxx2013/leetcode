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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        
        if(l2 == NULL)
            return l1;
        if(l1 == NULL)
            return l2;
        ListNode *res = new ListNode(NULL);
        ListNode *cur = res;
            
        
        while(l1!=NULL || l2!=NULL)
        {
            
            if(l1==NULL && l2!=NULL)
            {
                ListNode* insertNode = new ListNode(l2->val);
                cur->next = insertNode;
                cur = cur->next;
                l2 = l2->next;
                continue;
            }
            if(l1!=NULL && l2==NULL)
            {
                ListNode* insertNode = new ListNode(l1->val);
                cur->next = insertNode;
                cur = cur->next;
                l1 = l1->next;
                continue;
            }
            if(l1->val<l2->val)
            {
                ListNode* insertNode = new ListNode(l1->val);
                cur->next = insertNode;
                cur = cur->next;
                l1 = l1->next;
                //delete insertNode;
            }
            else if(l1->val>l2->val)
            {
                ListNode* insertNode = new ListNode(l2->val);
                cur->next = insertNode;
                cur = cur->next;
                l2 = l2->next;
            }
            else if(l1->val==l2->val)
            {
                ListNode* insertNode1 = new ListNode(l1->val);
                ListNode* insertNode2 = new ListNode(l2->val);
                cur->next = insertNode1;
                cur = cur->next;
                l1 = l1->next;
                cur->next = insertNode2;
                cur = cur->next;
                l2 = l2->next; 
                //delete insertNode1;
                //delete insertNode2;
            }
            
        }
        
        return res->next;
        
    }
};