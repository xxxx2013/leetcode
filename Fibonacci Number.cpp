class Solution {
    //动态规划方法求解斐波那契数列
public:
    int fib(int N) {
        
        if(N==0)
            return 0;
        if(N==1)
            return 1;
        
        vector<int> m(N+1,0);
        m[0] = 0;
        m[1] = 1;
        for(int i=2; i<=N; i++)
        {
            m[i] = m[i-1] + m[i-2];
        }
        
        return m[N];
    }
};