class Solution {
    //动态规划法求解
public:
    int integerBreak(int n) {
        
        vector <int> memo(n+1,-1);
        memo[1] = 1;
        for(int i=0; i<=n; i++)
        {
            for(int j=1; j<=i-1; j++)
            {
                memo[i] = max(max(memo[i],j*(i-j)),j*memo[i-j]);
            }
        }
        
        return memo[n];
        
    }
};