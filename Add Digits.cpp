class Solution {
public:
    int addDigits(int num) {
        
        int t = 0;
        
        while(num)
        {
            if(num < 10)
                break;
            else
            {
                t += (num%10);
                t += (num/10);
                num = t;
                t = 0;               
            }

        }
        
        return num;
        
    }
};