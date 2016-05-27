class Solution {
    /*
    ��1����������������Ϊ�գ����Һ���һ��Ϊ�գ���������Ϊ�գ���return
    ��2��������Ӳ�Ϊ�գ����Һ���һ����Ϊ�գ������������Ӻ��Һ��Ӽ��ɣ����ӵ�next��ֵΪ�Һ��ӣ�
    ��3������������������Ը��ڵ��next���ӽڵ��next�ȱ����ã��ʸ��ڵ㲻ͬ�������ӽڵ�������ӣ��Ϳ����õ����ڵ��next������ľ������ǣ�cur->left->next = cur->right
    */
public:
    void connect(TreeLinkNode *root) {
        
        if(root == nullptr)
        return;
        
        TreeLinkNode *cur;
        while(root -> left != nullptr)
        {
            cur = root;
            while(cur != nullptr)
            {
                cur -> left -> next = cur -> right;
                if(cur -> next != nullptr)
                {
                    cur -> right -> next = cur -> next -> left;
                }
                
                cur = cur -> next;
            }
            
            root = root -> left;
        }
    
    }
};