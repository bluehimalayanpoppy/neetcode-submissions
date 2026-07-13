class Solution {
public:
    int rob(vector<int>& nums) {
        
        //tabulation
        if (nums.size() == 1 )
        {
            return nums[0];
        }

         if (nums.size() == 2 )
        {
            return max(nums[0], nums[1]);
        }

        vector <int> one; 
        vector <int> two;
        //scenario 1: exclude the first house 
            for (int i = 1 ; i < nums.size(); ++i)
            {
               
               one.push_back(nums[i]);

            }
        //scenario 2: exclude last house
            for (int i = 0; i < nums.size()-1; ++i)
            {
                two.push_back(nums[i]);
            }
        
            one[1] = max(one[0], one[1]);

            for (int i = 2; i < one.size(); ++i)
            {
                one[i] = max (one[i-2] + one[i], one[i-1]);
            }

            two[0] = two[0];
            two[1] = max(two[0], two[1]);
            for (int i = 2; i < two.size(); ++i)
            {
                two[i] = max (two[i-2]+ nums[i], two[i-1]);
            }

            return max (two[two.size()-1], one[one.size()-1]);

    }
};
