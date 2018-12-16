/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    //虚拟节点+set查找表
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        int a = 0;
        set<int> rec;
        ListNode* dummyhead = new ListNode(NULL);
        dummyhead->next = head;
        ListNode* cur = dummyhead;
        
        while(cur->next!=NULL)
        {
            if(cur->next->next!=NULL && cur->next->next->val == cur->next->val)
            {
                rec.insert(cur->next->val);
            }
            cur = cur->next;
        }
        cur = dummyhead;
        while(cur->next!=NULL)
        {
            
            if(rec.find(cur->next->val)!=rec.end())
            {
                ListNode* delNode = cur->next;
                cur->next = delNode->next;
                delete delNode;
            }
            else
            {
                cur = cur->next;
            }
        }
        return dummyhead->next;
    }
};