/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    struct Command
    {
        string s;
        TreeNode* node;
        Command(string s, TreeNode* node):s(s),node(node){}
    };
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> res;
        if(!root)
            return res;
        
        stack <Command> stc;
        stc.push(Command("go",root));
        while(stc.empty()==false)
        {
            Command command = stc.top();
            stc.pop();
            if(command.s=="print")
            {
                res.push_back(command.node->val);
            }
            else
            {
                
                if(command.node->right)
                {
                    stc.push(Command("go",command.node->right));
                }
                
                if(command.node->left)
                {
                    stc.push(Command("go",command.node->left));
                }
                stc.push(Command("print",command.node));
                
            }
            
        }
        return res;        
    }
};