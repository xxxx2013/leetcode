class Solution {
public:
    int divide(int dividend, int divisor) {

        long long a = dividend;  
        long long b = divisor;  
        
        int max_int = 2147483647;
        int min_int = -2147483648;
        if(divisor == 0 || abs(dividend) > max_int)
        return max_int;
        

        
        int sign = 1;  
        if(a < 0){  
            a = -a;  
            sign *= -1;  
        }  
          
        if(b < 0){  
            b = -b;  
            sign *= -1;  
        }  
          
        int d = 0;  
        while ( (b << d) <= a )  
        {  
            ++d;  
        }  
          
        --d;  
          
        int res = 0;  
        for (int i = d; i >= 0; --i) {  
            if ( (b << i) <= a ) {  
                res += (1 << i);    // high to low  
                a -= (b << i);      // remaider  
            }  
        }  
        if(res == min_int && divisor > 0)
        return min_int;
        
        if(res == min_int && divisor < 0)
        return max_int;
        
        return sign * res;  
    }
};