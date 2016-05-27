class Solution {
    /*
    ������n���ڵ�n-1��λ���ϣ������ӵ�һ��λ�ÿ�ʼ�����λ���ϵ���������
    λ�úţ���ô���ǵ�һ��ȱʧ������
    */
public:
    int firstMissingPositive(vector<int>& nums) {
        
        if(nums.size() == 0)
        return 1;
        
        int i;
        int size = nums.size();
        for(i = 0;i < size;i++)
        {
            while(nums[i] > 0 && nums[i] < size && nums[nums[i]-1] != nums[i])
            {
                int temp = nums[nums[i]-1];
                nums[nums[i]-1] = nums[i];
                nums[i] = temp;
            }
        }
        
        for(i = 0;i < size;i++)
        {
            if(nums[i] != i+1)
            {
                return (i+1);
            }
        }
        return size + 1;
    }
};