class Solution {
    /*
    爬楼梯问题可以转换为裴波那契数列进行处理
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