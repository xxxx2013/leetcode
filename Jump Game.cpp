class Solution {
    /*
    ֻ��Ҫʱ�̼���ǰλ�ú͵�ǰλ������������Զ����,��ʼ�պ�n���ȽϾͿ���:
    1,��������posλ�ó���maxstepΪ0�����,��˵���޷�������ǰ�ƶ�,����false
    2.��������posλ�ó���maxstep+pos>=n˵������������һ��,����true
    */
public:
    bool canJump(vector<int>& nums) {
        
        int size = nums.size();
        
        if(size == 0 || size == 1)
        return true;
        
        int maxstep = nums[0];
        int i;
        for(i = 0;i < size;i++)
        {
            if(maxstep == 0)
            return false;
            maxstep--;
            
            if(maxstep < nums[i])
            maxstep = nums[i];
            
            if(maxstep + i  >= size)
            return true;
        }
     //return false;   
    }
};