class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map <int,int> stuff;
        
        int need; 
        vector<int> result;
 
        for (int i = 0; i < nums.size(); ++i)
        { 
            
            need = target - nums[i];
            //[6,0]

            //[5,1]
            //[4,2]
            if(stuff.find(nums[i]) != stuff.end())
            {
                return {stuff[nums[i]],i};
            }
            else
            {
                stuff[need] = i; 
            }
    
        
            //if it finds 5
            if (stuff.find(nums[i]) != stuff.end() && i != stuff[nums[i]])
            { 
                return {stuff[nums[i]],i};

            }
            
           
        }
        return {};
    }
};
