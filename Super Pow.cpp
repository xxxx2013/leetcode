class Solution {
    //快速幂级数法
    //1.a^b % 1337 = (a%1337)^b % 1337
    //2.xy % 1337 = ((x%1337) * (y%1337)) % 1337,其中xy是一个数字如:45, 98等等
public:
    int superPow(int a, vector<int>& b) {
        
        if(b.size()==0)
            return 1;
        a = a%1337;
        int lastbit = b.back();
        b.pop_back();
        return (superpow(superPow(a,b),10) * superpow(a,lastbit)) % 1337;
        
    }
    
    int superpow(int a, int k)
    {
        if(k==0)
            return 1;
        int res = 1;
        for(int i=1; i<=k; i++)
        {
            res = (res*a)%1337;
        }
        
        return res;
    }
};