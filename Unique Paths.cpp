class Solution {
public:
/*
    ��̬�滮�ķ����������Ͽ�ʼ���μ���ÿһ�е�ֵ����󷵻� V[M-1][N-1]����
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