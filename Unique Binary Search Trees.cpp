class Solution {
    /*
    二叉查找树可以任意取根，只要满足中序遍历有序的要求就可以。从处理子问题的角度来看，选取一个结点为根，就把结点切成左右子树，
    以这个结点为根的可行二叉树数量就是左右子树可行二叉树数量的乘积，所以总的数量是将以所有结点为根的可行结果累加起来。
    动态规划的思想
    */
public:
    int numTrees(int n) {
        
        vector <int> res(n+1);
        //res.push_back(1);
        int i;
        int j;
        res[0] = 1;
        res[1] = 1;
        for(i = 2;i <= n;i++)
        {
            for(j = 0;j < i;j++)
            {
                res[i] += res[j] * res[i-j-1];
            }
        }
        
        return res[n];
    }
};