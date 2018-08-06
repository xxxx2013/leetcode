class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if (n == 0)
            return false;
        
        if (n==1)
            return true;
        
        if (n < 0)
            return false;
        
        while(n > 1)
        {
            int temp;
            temp = n%2;
            if(temp!=0)
                return false;
            n = n/2;
        }
        return true;
        
        
    }
};