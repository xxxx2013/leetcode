class Solution {
    /*
        1.��̬�滮������⣬����Ҫ�ľ���ȷ����̬�滮��Ҫ�أ�����Ľ׶�,ÿ���׶ε�״̬�Լ���ǰһ���׶�ת������һ���׶�֮��ĵ��ƹ�ϵ��
        2.�����Ǵ����Ϸ������·��ߣ������ǿ�������һ��˫��ѭ�������е������㣬���ѭ������Ϊ��λ���ڲ�ѭ������Ϊ��λ����������������
    ������õĽ׶� ��״̬�����㵱ǰ���ӵĽ������Ϊÿ�μ���ĳ������ʱ���������Ӻ��ϲ���ӽ���Ѿ���ã���Ҳ�Ƕ�̬�滮�ȵݹ�Ҫ���ԭ��
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