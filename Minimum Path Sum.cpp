class Solution {
    /*
        1.动态规划求解问题，最重要的就是确定动态规划三要素：问题的阶段,每个阶段的状态以及从前一个阶段转化到后一个阶段之间的递推关系。
        2.由于是从左上方向右下方走，故我们可以利用一个双重循环来进行迭代计算，外层循环以行为单位，内层循环以列为单位，这样可以利用已
    经计算好的阶段 、状态来计算当前格子的结果，因为每次计算某个格子时，其左侧格子和上侧格子结果已经算好，这也是动态规划比递归要快的原因。
    */
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        vector<vector<int>> res(grid);
        if(grid.size() == 0)
        {
            return 0;
        }
        
        int row = grid[0].size();
        int col = grid.size();
        int i,j;
        for(i = 1;i < row;i++)
        {
            res[0][i] += res[0][i-1];
        }
        
        for(i = 1;i < col;i++)
        {
            res[i][0] += res[i-1][0];
        }
        
        for(i = 1;i < col;i++)
            for(j = 1;j < row;j++)
            {
                res[i][j] = min(res[i][j-1],res[i-1][j]) + grid[i][j];
            }
            
        return res[col-1][row-1];
        
    }
};