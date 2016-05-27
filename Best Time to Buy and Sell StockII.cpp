class Solution {
    /*
    贪心法。从前向后遍历数组，只要当天的价格高于前一天的价格，就算入收益。
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