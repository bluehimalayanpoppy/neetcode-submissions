class Solution {
public:
    int maxSubArray(vector<int>& nums) {


        vector <int> sum; 


        /*(2, -3,4,-2,2,1,-1,4)
        0-7
        2 
        2, -3 
        2, -3, 4
        2, -3, 4, -2 
        2, -3, 4, -2, 2 
        2, -3, 4, -2, 2, 1 
        2, -3, 4, -2, 2, 1, -1 
        2, -3, 4, -2, 2, 1, -1, 4 */
        if (nums.size() == 1)
        {
            return nums[0];
        }
        vector <int> max; 
        //lets use a bad number
        int maxNum = -10000000;  
        for (int i = 0; i< nums.size(); ++i)
        {
            sum.push_back(nums[i]);
            for (int j = i; j < nums.size() ; ++j )
            {
                if (i != j)
                {
                    sum.push_back(nums[j]);
                }
                if (std::accumulate(sum.begin(), sum.end(),0) > maxNum )
                {
                    max = sum; 
                    maxNum = std::accumulate(sum.begin(), sum.end(),0);
                }
            }
            sum.clear();
        }
        return maxNum; 
    }
};
