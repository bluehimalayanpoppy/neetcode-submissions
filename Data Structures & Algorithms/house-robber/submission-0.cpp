class Solution {
public:
    int rob(vector<int>& nums) {

    //f(n) = max(f(i-1) + f(i-2) 

    if (nums.size() == 1 )
    {
        return nums[0];
    }

    if (nums.size() == 2 )
    {
        
        return max(nums[0], nums[1]);
    }

    vector <int> table (nums.size());
    table[0] = nums[0];
    table[1] = max(nums[0], nums[1]);

    for (int i = 2; i < table.size(); ++i)
    {
        //if i skip 8 whats the total 
        //total: 9 
        //if i rob 8 whats the total 
        //8 + 2
        //total: 10
        table[i] = max( (table[i-2] + nums[i]) , table[i-1]);
    }

    return table[table.size()-1];
    }

    //2 9 8 3 6 
    //9 + 3 
    // 2 + 8 + 6 
};
