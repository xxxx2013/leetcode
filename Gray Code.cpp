class Solution {
    /*
    ������Ͷ�����������
    ����ߵڶ�λ�𣬽�ÿλ�����һλ������ֵ�����Ϊ��λ������ֵ
    �������һλ��Ȼ���䣩���������ֱ�����λ���������ת�����ֵ
    ���������������Ǹ�����ת������������ֵ��
    */
public:
    vector<int> grayCode(int n) {
        
        vector <int> res;
        int i;
        for(i = 0;i < pow(2,n);i++)
        {
            res.push_back(i/2 ^ i);
            
        }
        return res;
        
    }
};