class Solution {
public:

/*
      ���⣺�ڶ�ά����ϵ�У�(i, ai) ��ʾ �� (i, 0) �� (i, ai) ��һ���߶Σ����������������߶κ�x �����һ��ľͰ���ҳ��ܹ�ʢˮ����ľͰ���������ݻ���
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