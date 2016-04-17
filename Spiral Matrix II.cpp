class Solution {
    /*
    上下左右分别遍历矩阵
    */
public:
    vector<vector<int>> generateMatrix(int n) {
        //矩阵变量赋初值为0
        vector<vector<int>> res(n, vector<int>(n, 0));
        int i;
        int j;
        
        int num = 1;
        int h_begin = 0;
        int h_end = n - 1;
        int l_begin = 0;
        int l_end = n - 1;
        
        while(h_begin <= h_end && l_begin <= l_end)
        {
            if(num <= n*n)
            {
                for(j = l_begin;j <= l_end;j++)
                {
                    res[h_begin][j] = num;
                    num++;
                }
                
            }
            h_begin++;
            if(num <= n*n)
            {
                for(i = h_begin;i <= l_end;i++)
                {
                    res[i][l_end] = num;
                    num++;
                }
                
            }
            l_end--;
            if(num <= n*n)
            {
                for(j = l_end;j >= l_begin;j--)
                {
                    res[h_end][j] = num;
                    num++;
                }
            }
            h_end--;
            if(num <= n*n)
            {
                for(i = h_end;i >= h_begin;i--)
                {
                    res[i][l_begin] = num;
                    num++;
                }
            }
            l_begin++;
        }
        return res;
    }
};