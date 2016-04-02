class Solution {
public:

/*
��Ϊ����������û����ɸ���ģ����ԴӺ���ǰ�ҵ���һ������Ե�λ�á�
Ȼ��ʹ��ڵ�����С����˳��Ŀ��ܣ��Ӻ���ǰ�ҵ��ȵ�ǰλ�ô��Ԫ�أ�����֮��
��ǰλ�ú����Ԫ�ػ��ǽ������У������Ƿ�ת�õ���С˳�����С���ʵ����ԭ����ǰλ��Ԫ�غ������������У�
�����������Ԫ��֮������С�����У����Ǿ������ڵ�˳��
��������������ǰ������������У�ֻҪ��ת�������б����С���С�
*/
    void nextPermutation(vector<int>& nums) {
        
        int size = nums.size();
        int i,j;
        for(i = size - 2;i >= 0;i--)
        {
            if(nums[i+1] > nums[i])
            {
                for(j = size - 1;j >= i;j--)
                {
                    if(nums[j] > nums[i])
                    {
                        break;
                    }
                }
                    swap(nums[i],nums[j]);
                    reverse(nums.begin()+i+1,nums.end());
                    return;
                
            }
        }
        reverse(nums.begin(),nums.end());
        return;
        
        
    }
};