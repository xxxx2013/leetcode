class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    int i;    
    vector <int> n;
    int size = nums.size();
    //map��ʾ��ֵ��
    map <int,int> mp;
    for (i = 0;i < size;i++)
        mp[nums[i]] = i;
    //���ɵ�����
    map <int,int>::iterator it;
    for (i = 0;i < size;i++)
    {
        it = mp.find(target - nums[i]);
        if(it != mp.end() && (it -> second != i))
        {
            n.push_back(i);
                n.push_back(it->second);
                break;
        }
    }
    return n;
    }
    
};