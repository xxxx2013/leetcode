class Solution {
    /*
求最长合法匹配的长度，这道题可以用一维动态规划逆向求解。假设输入括号表达式为String s，维护一个长度为s.length的一维数组dp[]，数组元素初始化为0。dp[i]表示从s[i]到s[s.length-1] 包含s[i] 的最长的有效匹配括号子串长度。
i从n - 2 -> 0逆向求dp[]，并记录其最大值。若s[i] == '('，则在s中从i开始到s.length - 1计算dp[i]的值。
在s中寻找从i + 1开始的有效括号匹配子串长度，即dp[i + 1]，跳过这段有效的括号子串，查看下一个字符，其下标为j = i + 1 + dp[i+1]。若j没有越界，并且s[j] == ‘)’，则s[i ... j]为有效括号匹配，dp[i] =dp[i+1] + 2。
在求得了s[i ... j]的有效匹配长度之后，若j + 1没有越界，则dp[i]的值还要加上从j + 1开始的最长有效匹配，即dp[j + 1]。
    */
public:
    int longestValidParentheses(string s) {
        
      int len = s.length();
        if(len<2)
          return 0;
        int max = 0;
        int *dp = new int[len];
        for(int k = 0;k<len;k++)//把辅助数组清空，存储为0
         dp[k] = 0;
        for(int i = len-2;i>=0;i--)
        {
          if(s[i] == '(')//只对左括号处理，右括号在数组中存储为0
          {
            int j = i+1+dp[i+1];//计算与当前左括号匹配的右括号的位置。可能存在也可能不存在
            if(j<len && s[j] == ')')//确保位置不能越界
            {
              dp[i] = dp[i+1] + 2;//找到了相匹配的右括号，当前数组中存储的最长长度是它后一个位置加2，后一个位置可能存储长度是0
              if(j+1<len)//这是连接两个子匹配的关键步骤
                dp[i] += dp[j+1];//在j的后面可能已经存在连续的匹配，要记得加上。dp[j+1]存储了以j+1开始的匹配
            }
            if(dp[i]>max)
              max = dp[i];//更新最长长度
          }
          
        }
        return max;
    }
};