class Solution {
public:
    bool judgeSquareSum(int c) {
        
        if(c==1)
            return true;
        
        for(int i=0; i<=sqrt(c); i++)
        {
            int temp = c - i*i;
            if(sqrt(temp)==(int)sqrt(temp))
                return true;
        }
        
        return false;
        
    }
};