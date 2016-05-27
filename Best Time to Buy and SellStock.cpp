class Solution {
    /*
    ��̬�滮������ǰ���������飬��¼��ǰ���ֹ�����ͼ۸���Ϊ����۸�
    �������Ե���۸���۵����棬��Ϊ���ܵ�������棬�������������У�����
    ������������������
    */
public:
    int maxProfit(vector<int>& prices) {
        
        int size = prices.size();
        
        if(size <= 1)
        return 0;
        
        int Max = 0;
        int cur = prices[0];
        int i;
       // int j;
        
        for(i = 0;i < size; i++)
        {
            cur = min(cur,prices[i]);
            Max = max(Max,prices[i] - cur);
        }
        
        return Max;
    }
};