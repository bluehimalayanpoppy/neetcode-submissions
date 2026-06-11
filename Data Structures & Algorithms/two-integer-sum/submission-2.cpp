class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //two loops  // {3,4,5,6}, target = 7 
        //check every pair of number see if it adds to the target
        for (int i = 0; i < nums.size(); ++i) 
        {

            for (int j = i + 1; j < nums.size() ; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i,j}; 
                }
            }
            
        }
    }
};
