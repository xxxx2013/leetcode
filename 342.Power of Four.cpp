class Solution {
public:
    bool isPowerOfFour(int num) {
        
        if(num==1)
            return true;
        
        while(num>4)
        {
            if(num%4!=0)
                return false;
            else
            {
                num = num/4;
            }
        }
        
        return num==4;
        
    }
};