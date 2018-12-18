/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
//1.vector数组法
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

//2.链表归并排序法
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL)
            return head;
        if(head->next==NULL)
            return head;
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* pre = head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            pre = slow;
            slow = slow->next;
            fast = fast->next;
            fast = fast->next;
        }
        pre->next = NULL;
        return merge(sortList(head),sortList(slow));
    }
    ListNode* merge(ListNode* l1,ListNode* l2)
    {
        ListNode* dummy = new ListNode(NULL);
        ListNode* cur = dummy;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                cur->next = l1;
                l1 = l1->next;
            }
            else
            {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(l1!=NULL) cur->next = l1;
        if(l2!=NULL) cur->next = l2;
        return dummy->next;
    }
    
};