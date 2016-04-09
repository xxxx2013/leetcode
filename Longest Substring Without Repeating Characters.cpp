class Solution {
    /*
    ��һ�������¼��ǰ�ַ�������ֵ�λ�ã�һ�����ȥ��������߽磬�����������ֵ�����ˡ�
    ��Ҫ���ѳ����Ŀռ�
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