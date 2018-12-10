// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        
        int left = 1;
        int right = n;
        //int mid = 0;
        int res = 0;
        while(left<=right)
        {
            int mid = left + ((right - left)/2);
            int r = guess(mid);
            if(r==0)
            {
                res = mid;
                return res;
            }
                
            else if(r==-1)
            {
                right = mid-1; 
            }
            else if(r==1)
            {
                left = mid+1;
            }
            
        }
        
        return -1;
        
    }
};