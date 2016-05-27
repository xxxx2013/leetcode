class Solution {
public:
    /*
    ��n!�������У���һλ��Ԫ������(n-1)!һ����ֵģ�Ҳ��˵���p = k / (n-1)!����ô���е��ʼһ��Ԫ��һ����nums[p]
    */
    string getPermutation(int n, int k) {
        
        vector <int> nums(n);    
        string res = "";
        int i;
        int count = 1;
        for(i = 0;i < n;i++)
        {
            nums[i] = i+1;
            count *= i+1;
        }
        --k;
        
        for(i = 0;i < n;i++)
        {
            count = count / (n - i);
            int select = k / count;
            res += ('0' + nums[select]);
            
            for(int j = select;j < n-i-1;j++)
            {
                nums[j] = nums[j+1];
            }
            
            k = k % count;
        }
        
        return res;
    }
};