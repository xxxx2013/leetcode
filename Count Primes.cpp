class Solution {
    //循环判断n以内的每一个数是不是素数
public:
    int countPrimes(int n) {
        
        if(n<=2)
            return 0;
        
        if(n==3)
            return 1;
        
        int res = 0;
        
        for(int i=3; i<n; i++)
        {
            if(isprimes(i))
                res = res+1;
        }
        return res+1;
        
    }
    
    bool isprimes(int n)
    {
        for(int i=2; i<=(int)sqrt(n); i++)
        {
            if(n%i==0)
                return false;
        }
        
        return true;
    }
    
};

class Solution {
    //埃拉托斯特尼筛选法Sieve of Eratosthenes
public:
    int countPrimes(int n) {
        
        int res = 0;
        vector<bool> prime(n,true);
        
        for(int i=2; i<n; i++)
        {
            if(prime[i])
                res = res+1;
            for(int j=2;i*j<n;j++)
            {
                prime[i*j] = false;
            }
        }
        
        return res;
        
    }

    
};