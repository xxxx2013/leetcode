/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    //数据结构队列queue方法,l1,l2,sum分别构造队列queue
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        queue<int> q1;
        queue<int> q2;
        queue<int> sum;
        ListNode* dummy = new ListNode(-1);
        ListNode* cur = dummy;
        while(l1)
        {
            q1.push(l1->val);
            l1 = l1->next;
        }
        while(l2)
        {
            q2.push(l2->val);
            l2 = l2->next;
        }
        int cp = 0;
        while(q1.empty()==false || q2.empty()==false)
        {
            int a,b;
            if(q1.empty()==false)
            {
                a = q1.front();
                q1.pop();
            }
            else
            {
                a = 0;
            }
            if(q2.empty()==false)
            {
                b = q2.front();
                q2.pop();
            }
            else
            {
                b = 0;
            }
            sum.push((a+b+cp)%10);
            cp = (a+b+cp)/10;
        }
        if(cp)
        {
            sum.push(cp);
        }
        while(sum.empty()==false)
        {
            cur->next = new ListNode(sum.front());
            sum.pop();
            cur = cur->next;
        }
        
        return dummy->next;
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