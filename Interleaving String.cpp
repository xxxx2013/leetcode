class Solution {
    /*
    使用动态规划的方法
    */
public:
    bool isInterleave(string s1, string s2, string s3) {
        
        int s1_length = s1.length();
        int s2_length = s2.length();
        int s3_length = s3.length();
        
        if (s1_length + s2_length != s3_length)
        {
            return false;
        }
        
        int i;
        int j;
        bool res[1000][1000];
        res[0][0] = true;
        
        for(i = 1;i <= s1_length;i++)
        {
            res[i][0] = res[i-1][0] && (s1[i-1] == s3[i-1]);
        }
        
        for(i = 1; i <= s2_length;i++)
        {
            res[0][i] = res[0][i-1] && (s2[i-1] == s3[i-1]);
        }
        
        for(i = 1;i <= s3_length;i++)
        {
            for(j = 1;j <= s3_length;j++)
            {
                res[i][j] = (res[i-1][j] && (s1[i-1] == s3[i+j-1])) || (res[i][j-1] &&(s2[j-1] == s3[i+j-1]));
            }
        }
        
        return res[s1_length][s2_length];
    }
};