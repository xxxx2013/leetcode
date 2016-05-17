class Solution {
    /*
    EDIT[i,j]表示对于字符串a从1到i的子串和字符串b从1到j的字串的编辑距离。（字符串下标从1开始)
    EDIT[i - 1,j] + 1表示对a 在i 位置删除delete操作
    EDIT[i,j - 1] + 1 表示insert添加操作
    EDIT[i-1, j - 1] + f(x[i],y[j])这里如果x[i] == y[j] 则 f(x[i],y[j]) == 0 否则 ==1
    */
public:
    int minDistance(string word1, string word2) {
        
        int length1 = word1.length() + 1;
        int length2 = word2.length() + 1;
        
        vector <vector <int>> f (length1,vector<int> (length2));
        int i,j;
        
        for(i = 0;i < length1;i++)
        f[i][0] = i;
        
        for(i = 0;i < length2;i++)
        f[0][i] = i;
        
        for(i = 1;i < length1;i++)
            for(j = 1;j < length2;j++)
            {
                if(word1[i-1] == word2[j-1])
                {
                    f[i][j] = f[i-1][j-1];
                }
                else
                {
                    f[i][j] = f[i-1][j-1] + 1;
                }
                
                //取三种情况最小值
                f[i][j] = min(f[i][j],min(f[i][j-1]+1,f[i-1][j]+1));
            }
        
        return f[length1-1][length2-1];
    }
};