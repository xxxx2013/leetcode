class Solution {
public:
//关于非快乐数有个特点，循环的数字中必定会有4
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