class Solution {
public:
    /*
    在n!个排列中，第一位的元素总是(n-1)!一组出现的，也就说如果p = k / (n-1)!，那么排列的最开始一个元素一定是nums[p]
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