class Solution {
public:
    string multiply(string num1, string num2) {
        
        string res;
        int size_a = num1.size();
        int size_b = num2.size();
        int *a = new int [size_a];
        int *b = new int [size_b];
        int *r = new int [size_a+size_b];
        memset(a,0,sizeof(int)*(size_a));
        memset(b,0,sizeof(int)*(size_b));
        memset(r,0,sizeof(int)*(size_a+size_b));
        if(num1 == "0" || num2 == "0")
        return "0";
        int i,j;
        for(i = 0;i < size_a;i++)
        {
            a[i] = num1[i] - '0';
        }
        for(i = 0;i < size_b;i++)
        {
            b[i] = num2[i] - '0';
        }
        for(i = 0;i < size_a;i++)
        {
            for(j = 0;j < size_b;j++)
            {
                r[i+j+1] += a[i] * b[j]; 
            }
        }
        
        int k;
        for(k = size_a + size_b - 1;k >= 0;k--)
        {
            if(k > 0)
            {
                r[k-1] += r[k]/10;
            }
                r[k] %= 10;
                res = char(r[k] + '0') + res;
            
            
        }
        
        res = (res[0] == '0')?res.substr(1):res;
        return res;
        
    }
};