/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    /*
    1.����ɻ�
    2.�ߣ�length - k�����ڵ㴦�ϻ�
    */
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head -> next == NULL || k ==0 ) return head;
        
        ListNode *p = head;
        int n = 0;
        while(p -> next)
        {
            p = p -> next;
            n++;
        }
        n++;
        
        k = k % n;
        p -> next = head;
        
        ListNode *q = head;
        int i;
        for(i = 0;i < n - k - 1;i++)
        {
            q = q -> next;
        }
        head = q -> next;
        q -> next = NULL;
        
        return head;
    }
};