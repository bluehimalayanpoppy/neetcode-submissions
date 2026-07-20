class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
    std::sort (nums.begin(), nums.end());
    vector<vector<int>> Answer; 
    set<vector<int>> removeDuplicatesfinal; 
    vector<int> interior; 
    for (int i = 0; i < nums.size(); ++i)
    {
     
        int left = i + 1; 
        int right = nums.size() - 1; 

        while (left < right) 
        {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0)
            {
                interior = {nums[i], nums[left], nums[right]};
                Answer.push_back(interior); 
                //pointers move inward
                left++; 
                right--; 
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    for (int k = 0; k < Answer.size(); ++k )
    {
        //adding tiny vectors to set 
        removeDuplicatesfinal.insert(Answer[k]);
    }

    vector<vector<int>> final (removeDuplicatesfinal.begin(), removeDuplicatesfinal.end());
        return final;
    }
};
