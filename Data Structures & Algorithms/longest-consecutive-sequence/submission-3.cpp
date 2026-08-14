#include <algorithm>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        unordered_set <int> newSet(nums.begin(), nums.end()); 
      
        if (nums.empty())
        {
            return 0;
        }
        int longest = 1;

        for (int x: newSet)
        {//cant use indices for set 
            
            if (newSet.find(x-1) != newSet.end())
            {
                continue; 
             
            }
            else 
            {
                //if there are multiple possible starts
                int start = x;
                int current = x; 
                int count = 0;
                while (newSet.find(current) != newSet.end())
                {
                    current++;
                    count++;
                }
                if (count > longest)
                {
                    longest = count; 
                }
            }
        }  
        return longest; 
    
    }
};
