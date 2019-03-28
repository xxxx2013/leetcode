class Solution {
    //维护i2,i3,i5三个表,比较最小值
public:
    int nthUglyNumber(int n) {
        
        vector<int> res;
        if(n==0)
            return 0;
        
        res.push_back(1);
		int i2=0;
		int i3=0;
		int i5=0;
        while(res.size()<n)
        {
			int min2 = res[i2]*2;
			int min3 = res[i3]*3;
			int min5 = res[i5]*5;
			
			int minn = min(min(min2,min3),min5);

			if(minn==min2)
			{
				i2++;
			}
			if(minn==min3)
			{
				i3++;
			}
			if(minn==min5)
			{
				i5++;
			}

			res.push_back(minn);
        }
        
        return res[res.size()-1];
    }
};