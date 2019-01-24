class Solution {
    /*
    ��¥���������ת��Ϊ�Შ�������н��д���
    */
public:
    int climbStairs(int n) {
        
        int sum = 0;
        int a = 0;
        int b = 1;
        int i;
        for(i = 1;i <= n;i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
        
        return sum;
        
        
    }
};

class Solution {
    //��̬�滮����
public:
    int climbStairs(int n) {
       
        vector<int> memo(n+1,-1);
        memo[0] = memo[1] = 1;
        for(int i=2; i<=n; i++)
        {
            memo[i] = memo[i-1] + memo[i-2];
        }
        return memo[n];

    }
};