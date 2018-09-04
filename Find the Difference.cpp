class Solution {
public:
//使用位操作Bit Manipulation来做，利用异或的性质，相同位返回0，这样相同的字符都抵消了，剩下的就是后加的那个字符
    char findTheDifference(string s, string t) {
        
        char res = NULL;
        //遍历字符串
        for(char c : s)  res ^= c;
        for(char c : t)  res ^= c;

        
        return res;
    }
};