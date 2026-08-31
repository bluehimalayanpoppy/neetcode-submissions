class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        

        std::sort(nums.begin(), nums.end());
        //-4,-1,-1,0,1,2
        int right; 
        int left;
        int current;

        vector<vector<int>> result; 
        for (int i = 0; i < nums.size();++i)
        {
            current = nums[i];
            left = i+1 ;
            right = nums.size()-1;
           
            while (left < right)
            {
                int sum = current + nums[left] + nums[right];
                if (sum == 0)
                {
                    result.push_back({nums[left], current,nums[right]}) ;
                    left++; 
                    right--;
                }
                else if (sum < 0)
                { 
                //forward 
                left++;
                }
                else
                {
                right--;
                }
            }
        }

        //to remove duplicates 
        set remove = set (result.begin(), result.end());
        vector<vector<int>> actualResult = vector<vector<int>> (remove.begin(), remove.end());
        return actualResult; 

    }
};
