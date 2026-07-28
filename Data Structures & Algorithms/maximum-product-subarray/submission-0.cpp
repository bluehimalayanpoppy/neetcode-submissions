class Solution {
public:
    int maxProduct(vector<int>& nums) {

    //base case
    if (nums.size() == 1)
    {
        return nums[0];
    }
  
        
    vector<int> arrayMax (nums.size() +1, 0);
    arrayMax[0] = nums[0];
 

    vector<int> arrayMin (nums.size(), 0);
    arrayMin[0] = nums[0];
   

    int maxinMax = nums[0]; 

   
    for (int i = 1; i < nums.size(); ++i)
    {
        arrayMax[i] = std::max({nums[i], nums[i] *arrayMax[i-1], nums[i] * arrayMin[i-1]});
        arrayMin[i] = std::min({nums[i], nums[i] * arrayMin[i-1], nums[i] * arrayMax[i-1]});
        if (arrayMax[i] > maxinMax)
        {
            maxinMax = arrayMax[i];
        }
    }

    return maxinMax;
    }
};
