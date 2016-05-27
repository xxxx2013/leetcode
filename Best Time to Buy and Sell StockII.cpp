class Solution {
    /*
    ̰�ķ�����ǰ���������飬ֻҪ����ļ۸����ǰһ��ļ۸񣬾��������档
    */
    
public:
    int maxProfit(vector<int>& prices) {
        
        int size = prices.size();
        if(size <= 1)
        return 0;
    
        int Max = 0;
        int i;
        for(i = 1;i < size;i++)
        {
            int diff = prices[i] - prices[i-1];
            if(diff > 0)
            Max = Max + diff;
        }
        return Max;
    }
};