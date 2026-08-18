class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

    map <int, int> out; 
    int j  = 0;
    vector <int> result(nums.size(),1);
    int after = 1; 
    int before = 1;
    for (int i = nums.size()-1; i >=0 ; --i)
    {   //if its the last number
        if (i == nums.size()-1)
        {
            after *= 1; 
        }
        else
        {
            after *= (nums[i+1]);
        }
        result[i] = after;
        //reset after for each index
        //after = 0; 
    }
    
    for (int i = 0; i < nums.size(); ++i)
    {
        //if its the first number 
        if (i == 0)
        {
            before *= 1; 
        }
        else
        {
            before *= (nums[i-1]); 
        }
        result[i] *= before; 
    }
    return result;
    }
};
