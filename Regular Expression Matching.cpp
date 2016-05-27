bool isMatch(char* s, char* p) {
    /*
题目意图很简单，就是实现一个正则表达式匹配的判定函数。　特别要说一下的是　.* 这个格式，因为不是经常用，最开始想错了，以为是先匹配"." 然后 "." 匹配成什么，后面的 * 就扩展什么。
其实核心的思路是一个动态规划
dp[i][j]表示字串 s[i...len(s)], p[j...len(p)] 是否可以匹配。
那么状态转移方程如下：
dp[i][j] = 
c1. p[j+1] != *.  if s[i] == p[j]  dp[i][j] = dp[i+1][j+1] 
                       else dp[i][j] = false
c2 p[j+1] == '*' (这个情况下，要扩展 *, dp[i][j] 从拓展的情况下，选择一个是真的结果）
                       if( s[i] ==  p[j] || p[j] == '.' && (*s) != 0)  当s[i] 和 p[j] 一样的时候，例如 aba, a*b这个时候，i = 0, j = 0, 自然可以匹配a a
                                                                                如果p[j] == .  因为他可以匹配任何字符，所以和相等关系有基本一样的方式。
                       并且每一步匹配都要递增 i 的值，如果有成立的，则返回true，否则到匹配终了，返回通配符匹配完成后的结果。
*/
    if (0 == *p)
    {
        return (0 == *s);
    }
    if(*(p + 1) != '*')
    {
        if (*s != 0 && (*s == *p || *p == '.'))
        return isMatch (s+1,p+1);
        else return false;
    }
    else
    {
        while (*s != 0 && (*s == *p || *p == '.'))
        {
            if(isMatch (s,p+2) ) return true;
            s++;
        }
        
        return isMatch(s,p+2);
        
    }
    
    
    
}