class Solution {
    /*
    动态规划法。从前向后遍历数组，记录当前出现过的最低价格，作为买入价格，
    并计算以当天价格出售的收益，作为可能的最大收益，整个遍历过程中，出现
    过的最大收益就是所求。
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