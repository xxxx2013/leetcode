class Solution {
    //等差数列前n项和公式
public:
    int arrangeCoins(int n) {
        
        if(n<=1)
            return n;
        if(n==2)
            return 1;
        
        long k;
        
        long sum = 0;
        for(k=1; k<=n; k++)
        {

            if(k*(k+1)/2>n)
            {
                return k-1;
            }

        }
        
        return 0;
    }
};