class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int h_size = haystack.size();
        int n_size = needle.size();
        
        int i;
        int j;
        for(i = 0;i <= h_size - n_size;i++)
        {
            for(j = 0;j < n_size;j++)
            {
               if(needle[j] != haystack[i + j]) 
               break;
            }
            if(j == n_size)
            {
                return i;
            }
        }
        
        return -1;
    }
};