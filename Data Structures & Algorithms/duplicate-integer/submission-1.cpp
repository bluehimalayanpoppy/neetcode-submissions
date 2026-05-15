class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        int greatest = -1000000; 
        vector<int> sub;
        //vector<int> sub = {nums[0]}; 
        //first part: sorting 
    
        for (int i = 0; i < nums.size(); ++i)
        {    
            for (int j = 0; j < sub.size(); ++j)
            { 
                if (nums[i] == sub[j])
                {
                return true;
                }
            }
            
             sub.push_back (nums[i]);
        }
        return false;
    }
    };