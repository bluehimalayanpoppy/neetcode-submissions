class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        set<int> uniqueNums; 
        for (int i = 0; i < nums.size(); ++i)
        {
            //if not in the set, insert it
            if (!uniqueNums.contains(nums[i]))
            {
                uniqueNums.insert(nums[i]);
            }
            else
            {
                return true;
            }

        }
        return false;

        
    }

};