#include <iostream>


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map <int,int> freq; 
        vector<int>result; 
        for (size_t i = 0; i < nums.size(); ++i)
        {
            freq[nums[i]]++; 
        }
        // if multiple numbers have the same frequency
        //[6,6,6,6,6,6]
        //bucket [6] = index 6
        vector<vector<int>> bucket (nums.size()+1); 

        for (auto one: freq)
        {
            bucket[one.second].push_back(one.first);
        }
        for (int i = bucket.size()-1; result.size() < k; i--)
        {   
            for (int one: bucket[i])
            {
                //add one out of all numbers matching one freq
                result.push_back(one); 
            }
        }
        return result; 

    
    }
};
