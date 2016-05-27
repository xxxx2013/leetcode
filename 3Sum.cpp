class Solution {
public:
/*
��Ҫ˼·�� 
 * 1��Ϊ��ѡ������Ԫ���Ƿǵݼ��ģ��ȶ���������������� 
 * 2����ٷ�ѡȡ������������Ԫ�飬����ÿ��Ԫ��ֻ��ȡһ�Σ����Ե�ǰѭ������ʼΪ�ϴ�ѭ����ʼ֮�� 
 * 3������ԭʼ�������鱾����ܰ����ظ�Ԫ�أ�������Ҫ��ѡȡ������Ԫ�����ɸѡ�Ƴ��ظ���Ԫ�� 
*/

    vector<vector<int>> threeSum(vector<int>& nums) {
     
     vector <vector<int>> result;
     result.clear();
     int i;
     int length = nums.size();
     //��������
     sort(nums.begin(),nums.end());
     for(i = 0; i < length; i++)
     {
         if(i > 0 && nums[i] == nums[i-1])
         {
             continue;
         }
         
         int j;
         int k;
         j = i + 1;
         k = length - 1;
         while(j < k)
         {
             if(j > i+1 && nums[j] == nums[j-1])
             {
                 j++;
                 continue;
             }
             
             if(k < (length-1) && nums[k] == nums[k+1])
             {
                 k--;
                 continue;
             }
             int sum = nums[i] + nums[j] + nums[k];
             if(sum > 0)
             {
                 k--;
             }
             else if(sum < 0)
             {
                 j++;
             }
             else
             {
                 vector <int> temp;
                 temp.push_back(nums[i]);
                 temp.push_back(nums[j]);
                 temp.push_back(nums[k]);
                 result.push_back(temp);

                 
                 j++;
             }
         }
     }
     
     return result;
     
     
    }
};