class Solution {
    /*
    ͨ��ɨ��n�Ķ����Ʊ�ʾ��ʽ�ﲻͬλ���ϵ�1��������x���ݴ�
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