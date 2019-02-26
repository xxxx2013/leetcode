/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
    //贪心算法
public:
    
    static bool cmp(Interval& a,Interval& b)
    {
        if(a.end == b.end)
        {
            return a.start < b.start;
        }
        return a.end < b.end;
    }
    
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        
        if(intervals.size()<=1)
            return 0;
        
        sort(intervals.begin(),intervals.end(),cmp);
        int res = 1;
        int pre = 0;
        
        for(int i=1; i<intervals.size(); i++)
        {
            if(intervals[i].start>=intervals[pre].end)
            {
                pre = i;
                res = res + 1;
            }
            
        }
        
        return intervals.size() - res;
    }
};