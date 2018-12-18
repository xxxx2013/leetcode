/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    //快慢指针方法
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return NULL;
        
        ListNode* dummyhead = new ListNode(NULL);
        dummyhead->next = head;
        ListNode* fast = dummyhead;
        ListNode* slow = dummyhead;
        
        for(int i=0; i<n+1;i++)
        {
            fast = fast->next;
        }
        
        while(fast!=NULL)
        {
            fast = fast->next;
            slow = slow->next;
            
        }
        ListNode* delNode = slow->next;
        slow->next = delNode->next;
        delete delNode;
        
        return dummyhead->next;
    }
};

class Solution {
	//计算链表长度再删除
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int length = 0;
        ListNode* cur = head;
        while(cur!=NULL)
        {
            cur = cur->next;
            length++;
        }
        
        ListNode* dummy = new ListNode(NULL);
        dummy->next = head;
        cur = dummy;
        int i = 0;
        while(cur!=NULL)
        {
            if(i == length-n)
            {
                ListNode* delNode = cur->next;
                cur->next = delNode->next;
                delete delNode;
                break;
            }
            cur = cur->next;
            i++;
        }
        return dummy->next;
        
    }
};