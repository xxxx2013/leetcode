class Solution {
    /*
    EDIT[i,j]��ʾ�����ַ���a��1��i���Ӵ����ַ���b��1��j���ִ��ı༭���롣���ַ����±��1��ʼ)
    EDIT[i - 1,j] + 1��ʾ��a ��i λ��ɾ��delete����
    EDIT[i,j - 1] + 1 ��ʾinsert��Ӳ���
    EDIT[i-1, j - 1] + f(x[i],y[j])�������x[i] == y[j] �� f(x[i],y[j]) == 0 ���� ==1
    */
public:
    int minDistance(string word1, string word2) {
        
        int length1 = word1.length() + 1;
        int length2 = word2.length() + 1;
        
        vector <vector <int>> f (length1,vector<int> (length2));
        int i,j;
        
        for(i = 0;i < length1;i++)
        f[i][0] = i;
        
        for(i = 0;i < length2;i++)
        f[0][i] = i;
        
        for(i = 1;i < length1;i++)
            for(j = 1;j < length2;j++)
            {
                if(word1[i-1] == word2[j-1])
                {
                    f[i][j] = f[i-1][j-1];
                }
                else
                {
                    f[i][j] = f[i-1][j-1] + 1;
                }
                
                //ȡ���������Сֵ
                f[i][j] = min(f[i][j],min(f[i][j-1]+1,f[i-1][j]+1));
            }
        
        return f[length1-1][length2-1];
    }
};