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


class Solution {
    //dummy虚拟节点方法
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* cur = dummy;
        int cp = 0;
        while(p1 || p2)
        {
            int a;
            int b;
            if(p1==NULL)
            {
                a = 0;
            }
            else
            {
                a = p1->val;
            }
            if(p2==NULL)
            {
                b = 0;
            }
            else
            {
                b = p2->val;
            }
            cur->next = new ListNode((a + b + cp)%10);
            cp = (a + b + cp)/10;
            cur = cur->next;
            if(p1==NULL)
            {
                p1=NULL;
            }
            else
            {
                p1 = p1->next;
            }
            if(p2==NULL)
            {
                p2=NULL;
            }
            else
            {
                p2 = p2->next;            
            }
        }
        if(cp!=0)
            cur->next = new ListNode(cp);
        else
            cur->next = NULL;
        return dummy->next;
    }
};