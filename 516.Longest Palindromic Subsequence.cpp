class Solution {
    //动态规划DP 二维DP i,j 
public:
    int longestPalindromeSubseq(string s) {

        int n = s.size();
        
        vector <vector<int>> memo(n,vector<int>(n,0));
        
        for(int i=n-1; i>=0; i--)
        {
            memo[i][i] = 1;
            for(int j=i+1; j<n; j++)
            {
                if(s[i]==s[j])
                {
                    memo[i][j] = memo[i+1][j-1] + 2;
                }
                else
                {
                    memo[i][j] = max(memo[i+1][j],memo[i][j-1]);
                }
            }
        }
        
        
        return memo[0][n-1];
        
    }
};