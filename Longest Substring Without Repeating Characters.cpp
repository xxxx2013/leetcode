class Solution {
    /*
    开一个数组记录当前字符最近出现的位置，一遍算过去，更新左边界，用它计算最大值就行了。
    需要花费常数的空间
    */
public:
    int lengthOfLongestSubstring(string s) {
        int n = 0;
        int left = 0;
        int length = s.length();
        int p[256];
        int i;
        int j;
        memset(p, -1 , sizeof(p));
        for( i = 0; i < length; i++)
        {
            if(p[s[i]] >= left)
            {
                left = p[s[i]] + 1;
            }
            p[s[i]] = i;
            n = max(n , i - left + 1);
         
        }
        return n;
    }
};