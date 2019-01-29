/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    //使用数据结构栈stack, 分别建立l1,l2及sum的栈stack
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        stack<int> s1;
        stack<int> s2;
        stack<int> sum;
        while(l1)
        {
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2)
        {
            s2.push(l2->val);
            l2 = l2->next;
        }
        ListNode* dummy = new ListNode(-1);
        int cp = 0;
        while(s1.empty()==false || s2.empty()==false)
        {
            int a , b;
            if(s1.empty()==false)
            {
                a = s1.top();
                s1.pop();
            }
            else
            {
                a = 0;
            }
            if(s2.empty()==false)
            {
                b = s2.top();
                s2.pop();
            }
            else
            {
                b = 0;
            }
            sum.push((a+b+cp)%10);
            cp = (cp + a + b)/10;
        }
        if(cp)
        {
            sum.push(cp);
        }
        
        ListNode* head = dummy;
        while(sum.empty()==false)
        {
            head->next = new ListNode(sum.top());
            head = head->next;
            sum.pop();
        }
        
        return dummy->next;
        
    }
};