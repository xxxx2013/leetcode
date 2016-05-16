class Solution {
    /*
    首先找到最高的，然后从左往最高处扫，碰到一个数A[i]，计算A[0,,,i-1]最高的是否高过A[i]，
    如果是，则A[i]上的水的体积为max(A[0...i-1])-A[i],否则为0并且更新最大值
    */
public:
    int trap(vector<int>& height) {
        
        //int num;
        int length = height.size();
        
        if(length <= 2)
        return 0;
        
        int maxId = 0;
        int i;
        for(i = 0;i < length;i++)
        {
            if(height[i] > height[maxId])
            {
                maxId = i;
            }
        }
        
        int water = 0;
        int cur = height[0];
        for(i = 1;i < maxId;i++)
        {
            if(height[i] > cur) cur = height[i];
            else
            {
                water += (cur - height[i]);
            }
        }
        
       int cur_end = height[length-1];
        
        for(i = length - 2;i > maxId;i--)
        {
            if(height[i] > cur_end) cur_end = height[i];
            else
            {
                water += (cur_end - height[i]);
            }
        }
        return water;
    }
};