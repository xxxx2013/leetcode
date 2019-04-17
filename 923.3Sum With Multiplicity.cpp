class Solution {
    //vector查找表方法
public:
    int threeSumMulti(vector<int>& A, int target) {
        
        sort(A.begin(), A.end());
        
        int mod = 1000000007;
        
        long  ans = 0;
        vector<int> rec(101);
        for(int i=0; i<A.size(); i++)
        {
            rec[A[i]]++;
        }
        
        for(int x=0; x<=100; x++)
        {
            for(int y=x+1; y<=100; y++)
            {
                int z = target-x-y;
                if(z>y && z<=100)
                {
                    ans += rec[x]*rec[y]*rec[z];
                    ans = ans%mod;
                }
            }
        }
        
        
        for(int x=0; x<=100; x++)
        {
            int z = target-2*x;
            if(z>x && z<=100)
            {
                ans += rec[z] * rec[x]*(rec[x]-1)/2;
                ans = ans%mod;
            }
        }
        for(int x=0; x<=100; x++)
        {
            if((target-x)%2==0)
            {
                int z = (target-x)/2;
                if(z>x && z<=100)
                {
                    ans += rec[x] * rec[z]*(rec[z]-1)/2;
                    ans = ans%mod;
                }                
            }

        }
        
        if(target%3==0)
        {
            int x = target/3;
            if(x<=100)
            {
                long sum = (long)rec[x]*(long)(rec[x]-1)*(long)(rec[x]-2);
                sum = sum/6;
                ans = ans + sum;
                ans = ans%mod;                
            }

        }
        
        return (int)ans;
    }
};