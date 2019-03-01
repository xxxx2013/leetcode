class Solution {
    //通过推导,找到[2...n]之间的完全平方数即可
public:
    int bulbSwitch(int n) {
        
        if(n<=1)
            return n;
        
        int res = 1;

        for(int i=2; i<=n; i++)
        {
            if(sqrt(i)-(int)sqrt(i)==0)
            {
                res = res + 1;
            }
        }
        
        return res;
    }
    
};