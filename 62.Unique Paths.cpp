class Solution {
public:
/*
    动态规划的方法，从左上开始依次计算每一行的值，最后返回 V[M-1][N-1]即可
*/
    int uniquePaths(int m, int n) {
        
        vector <vector <int>> v(m,vector<int>(n,1));
        
        int i;
        int j;
        
        for(i = 1;i<m;i++)
            for(j = 1;j<n;j++)
            {
                v[i][j] = v[i-1][j] + v[i][j-1];
            }
        return v[m-1][n-1];
    }
};