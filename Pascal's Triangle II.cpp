class Solution {
    /*
    ���ڲ���һ���µ����ôӺ���ǰ�ķ��������£�������ֻ��һ��O(k)�Ŀռ�
    */
public:
    vector<int> getRow(int rowIndex) {
        
        vector <int> res(rowIndex+1);
        int i;
        int j;
        
        res[0] = 1;
        
        for(i = 1;i <= rowIndex;i++)
        {
            for(j = i; j > 0;j--)
            {
                if(j == i)
                {
                    res[j] = 1;
                }
                else if(j == 0)
                {
                    res[j] = 1;
                }
                else
                {
                    res[j] = res[j] + res[j-1];
                }
            }
        }
        return res;
    }
};