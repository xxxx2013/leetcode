class Solution {
    /*
    �����ҵ���ߵģ�Ȼ���������ߴ�ɨ������һ����A[i]������A[0,,,i-1]��ߵ��Ƿ�߹�A[i]��
    ����ǣ���A[i]�ϵ�ˮ�����Ϊmax(A[0...i-1])-A[i],����Ϊ0���Ҹ������ֵ
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