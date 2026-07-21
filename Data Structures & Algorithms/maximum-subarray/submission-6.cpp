class Solution {
public:
    int maxSubArray(vector<int>& nums) {

   
    int currentSum = 0; 
    //best sum across all indexes
    int bestSum = -10000000;
    if (nums.size() == 1 )
    {
        return nums[0];
    }
    
    else 
    //greedy algorithm 
    for (int i = 0; i < nums.size(); ++i)
    {
        //gets best sum at each index
        //if current num adding to the sum, or should we start fresh
        if (nums[i] + currentSum > nums[i])
        {
            currentSum = nums[i] + currentSum;
        }
        else
        {
            currentSum = nums[i];
        }
        if (currentSum > bestSum )
        {
            bestSum = currentSum; 
        }
    }
    return bestSum;

    }
    
};
