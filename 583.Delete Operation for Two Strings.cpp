class Solution {
    //基于二维数组的动态规划memo[i][j]
public:
    int minDistance(string word1, string word2) {
        
        
        int n = word1.size();
        int m = word2.size();
        
        vector<vector<int>> memo(n+1,vector<int>(m+1));
        
        
        for(int i=0; i<=n; i++)
        {
            memo[i][0] = i;
        }
        
        for(int j=0; j<=m; j++)
        {
            memo[0][j] = j;
        }        
        
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(word1[i-1] == word2[j-1])
                {
                    memo[i][j] = memo[i-1][j-1];
                }
                
                else
                {
                    memo[i][j] = min(memo[i-1][j],memo[i][j-1]) + 1;
                }

            }
        }
        
        return memo[n][m];
    }
};