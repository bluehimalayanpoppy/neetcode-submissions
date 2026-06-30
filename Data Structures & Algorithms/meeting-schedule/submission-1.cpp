/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        //recursion 
        //start end 
        //next end is >= previous start 
        if (intervals.size() == 1)
        {
            return true; 
        }

    
        
        //find the lowest start time put it on the bottom of the stack 
        //sort by lowest start times, use lambda anonymous function
        //[] capture list 
        std::sort(intervals.begin(), intervals.end(), [] (const Interval&
        A, const Interval& B) 
        {
            return A.start < B.start; 

        });
        //after sorting comparing neighbors is enough
        for (int i = 1; i < intervals.size(); ++i) 
        {
            if (intervals[i].start < intervals[i -1].end)
            {
                return false;
            }
        }
        return true; 
         



        
    }
};
