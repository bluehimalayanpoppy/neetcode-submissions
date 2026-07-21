class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
    std::sort (nums.begin(), nums.end());
    set<vector<int>> removeDuplicates; 
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
                removeDuplicates.insert(interior); 
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
    vector<vector<int>> final (removeDuplicates.begin(), removeDuplicates.end());
        return final;
    }
};
