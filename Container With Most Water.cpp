class Solution {
public:

/*
      题意：在二维坐标系中，(i, ai) 表示 从 (i, 0) 到 (i, ai) 的一条线段，任意两条这样的线段和x 轴组成一个木桶，找出能够盛水最多的木桶，返回其容积。
*/
    int maxArea(vector<int>& height) {
        
        int s_result = 0;
        int h_size = height.size();
        int i,j;
        
        i = 0;
        j = h_size - 1;
        
        while(i < j)
        {
            int area = (j - i) *( (height[i] > height[j]) ? height[j] : height[i]);
            
            if(height[i] > height[j])
            {
                --j;
            }
            else
            {
                ++i;            
                
            }
            if(area > s_result)
            {
                s_result = area; 
            }
        }
        return s_result;
        
    }
};