class Solution {
    /*
    ¶þ·Ö·¨ËÑË÷
    */
public:
    int mySqrt(int x) {
        
        if(x <= 1)
        {
            return x;
        }
        
        int res;
        int begin = 1;
        int end = x;
        int mid = 0;
        while(begin <= end)
        {
            mid = (begin + end)/2;
            
            if(mid == x/mid)
            return mid;
            
            else
            {
                if (mid < x/mid)
                {
                    begin = mid + 1;
                }
                
                if(mid > x/mid)
                {
                    end = mid - 1;
                }
            }
        }
        
        return end;
    }
};