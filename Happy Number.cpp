class Solution {
public:
//���ڷǿ������и��ص㣬ѭ���������бض�����4
    bool isHappy(int n) {
        
        while(n!=1 && n!=4)
        {
            int t = 0;
            while(n)
            {
                t += (n%10) * (n%10);
                n = n/10;
            }
            n = t;
        }
        
        
        return !(n==4);
    }
};