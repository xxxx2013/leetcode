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