class Solution {
    //二分法检索
public:
    bool isPerfectSquare(int num) {
        
        if(num==1)
            return true;
        int l=1;
        int r=num/2;
        while(l<=r)
        {
            int mid = ceil((l+r)/2);
            if((float)mid==(float)num/mid)
                return true;
            else if((float)mid>(float)num/mid)
            {
                r = mid-1;
            }
            else if((float)mid<(float)num/mid)
            {
                l = mid+1;
            }
        }

        return false;
    }
};