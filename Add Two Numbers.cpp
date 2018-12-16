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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        
        ListNode* res = new ListNode(NULL);
        ListNode* cur = res;
        int c = 0;
        while(l1!=NULL || l2!=NULL)
        {
            int num1 = 0,num2 = 0;
            if(l1!=NULL)
            {
                num1 = l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                num2 = l2->val;
                l2 = l2->next;
            }
            
            int tmp;
            tmp = num1 + num2 + c;
            cur->next = new ListNode(tmp%10);
            c = tmp/10;
            cur = cur->next;
            
        }
        if(c!=0)
        {
            cur->next = new ListNode(c);
            cur = cur->next;
        }
        return res->next;
    }
};