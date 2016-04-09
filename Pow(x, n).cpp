class Solution {
    /*
    通过扫描n的二进制表示形式里不同位置上的1，来计算x的幂次
    */
public:
    double myPow(double x, int n) {
        
        if(n<0)  
        {  
            if(n==INT_MIN)  
                return 1.0 / (pow(x,INT_MAX)*x);  
            else  
                return 1.0 / pow(x,-n);  
        }  
        
        if (n == 0)
        return 1.0;
        
        double res = 1.0;
        for(;n > 0;x *=x,n >>= 1)
        {
            if(n&1 > 0)
            res *= x;
        }
        return res;
        
        
        
    }
};