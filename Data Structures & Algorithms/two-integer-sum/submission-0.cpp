class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


        unordered_map <int, int> hashmap; 
        //need number target - x 
        int need; 
        int a;

        //lets make values the indixes
        for (int i = 0 ; i < nums.size(); ++i)
        { 
            need = target - nums[i]; 

            //find the index that matches need
            auto b = hashmap.find(need);

            //if found return answer
            if (b != hashmap.end())
            {
            return {(*b).second, i}; 
            }

            //store current number
            hashmap[nums[i]] = i; 
        } 
        
    }
};
