class Solution {
    /*
    只需要时刻计算前位置和当前位置所能跳的最远长度,并始终和n作比较就可以:
    1,若在任意pos位置出现maxstep为0的情况,则说明无法继续向前移动,返回false
    2.若在任意pos位置出现maxstep+pos>=n说明可以完成最后一跳,返回true
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