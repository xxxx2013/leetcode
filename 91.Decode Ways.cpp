class Solution {
    //动态规划DP memo[i] 参考斐波那契数列
public:
    int numDecodings(string s) {
        
        int n = s.size(); 
        
        if(s.size()==0)
            return 0;
        if(s[0]=='0')
            return 0;
        
        vector<int> memo(n+1,0);
        memo[0] = 1;
        memo[1] = 1;
        
        for(int i=2; i<=n; i++)
        {
            if(s[i-1]>='1' && s[i-1]<='9')
            {
                memo[i] += memo[i-1];
                
                if(s[i-2]=='1')
                {
                    memo[i] += memo[i-2];
                }
                else if(s[i-2]=='2')
                {
                    if(s[i-1]>='1' && s[i-1]<='6')
                    {
                        memo[i] += memo[i-2];
                    }
                }
                
            }
            else
            {
                if(s[i-2]=='1' || s[i-2]=='2')
                {
                    memo[i] += memo[i-2];
                }
            }

        }
        
        return memo[n];
    }
};