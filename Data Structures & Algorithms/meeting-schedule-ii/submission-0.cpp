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
    int minMeetingRooms(vector<Interval>& intervals) {
        

         if (intervals.size() == 1)
         {
            return 1; 
         }


        vector<int> starts, ends;

        for (int i = 0; i < intervals.size(); ++i) {
        starts.push_back(intervals[i].start);
        ends.push_back(intervals[i].end);
        }

        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

    int *start_pointer = &starts[0];
    int *end_pointer = &ends[0];

    int rooms = 0;
    int max_rooms = 0;
    int index = 0; 
    while (index < intervals.size())
    {
        if (*start_pointer < *end_pointer) {
        
        rooms++; 
        start_pointer++;
        index++;
        }
        else
        {
        end_pointer++; 
        rooms--; 
        } 

        if (rooms > max_rooms)
        {
            max_rooms = rooms; 
        }

    }
    return max_rooms; 

    
    }
};
