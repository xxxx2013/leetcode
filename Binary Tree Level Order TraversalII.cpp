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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> rec;
        vector<vector<int>> res;
        
        if(!root)
            return res;
        
        queue<pair<TreeNode*,int>> queue;
        queue.push(make_pair(root,0));
        
        while(queue.empty()==false)
        {
            TreeNode* node = queue.front().first;
            int level = queue.front().second;
            queue.pop();
            
            if(level == rec.size())
            {
                vector<int> a;
                rec.push_back(a);
            }
            rec[level].push_back(node->val);
            
            if(node->left)
            {
                queue.push(make_pair(node->left,level+1));
            }
            if(node->right)
            {
                queue.push(make_pair(node->right,level+1));
            }
            
        }
        
        for(int i=rec.size()-1; i>=0; i--)
        {
            res.push_back(rec[i]);
        }
        
        return res;
    }
};