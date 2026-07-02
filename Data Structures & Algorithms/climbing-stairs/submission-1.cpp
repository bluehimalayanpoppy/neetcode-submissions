class Solution {
public:
    int climbStairs(int n) {
    
    //recursion 
    //for 4
    //1 1 2 
    // 2 1 1
    // 1 1 1 1
    // 2 2
    // 1 2 1 
    
    //base case: first stair has one possibility 
    //second stair has 2 possibilities
    if (n == 1)
    {
        return 1; 
    }

    if (n == 2)
    {
        return 2; 
    }

    //initialize array with 0s 
    vector <int> array(n); 
    array[0] = 1; 
    array[1] = 2;

    for (int i = 2; i < array.size(); ++i)
    {
        array[i] = array[i-1] + array[i-2];
    }

    return array[array.size()-1];
    
    //to reach the last stair bob could have taken the second last step
    //or 2 away from the last stair
    //f(n) = f(n-1) + f(n-2)

    
    }
};
