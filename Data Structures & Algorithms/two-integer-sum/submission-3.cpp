class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map <int,int> stuff;
        //first int is index
        //second int is number needed to reach target
        int need; 
        //stuff[0] = target - nums[0];
        for (int i = 0; i < nums.size(); ++i)
        { 
            //i = 0 // need = 6
            //i = 2// need = 5
            need = target - nums[i];
            // [0,4]
            // [1, 5]
            stuff[i] = nums[i];
            
    
            for (auto apple: stuff)
            {  
                if (apple.second == need && apple.first != i)
                {
                    return {apple.first, i};
                }
            }
           
          
        }
        
    }
};
