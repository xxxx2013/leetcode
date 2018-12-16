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
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        vector<int> rec;
        ListNode* cur = head;
        while(cur!=NULL)
        {
            rec.push_back(cur->val);
            cur = cur->next;
        }
        sort(rec.begin(),rec.end());
        ListNode* res = new ListNode(NULL);
        ListNode* c = res;
        for(int i=0; i<rec.size(); i++)
        {
            ListNode *insertNode = new ListNode(rec[i]);
            c->next = insertNode;
            c = c->next;
        }
        return res->next;
    }
};