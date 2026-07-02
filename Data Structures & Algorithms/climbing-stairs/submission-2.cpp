class Solution {
  
public:
    vector <int> memoization; 
    int helper(int n)
    { 
        if (n ==1 )
        {
            return 1; 
        }
        if (n==2)
        {
            return 2; 
        }
         //cache check
        if (memoization[n] != -1)
        {
        //return stored answer if there's a value 
            return memoization[n]; 
        } 
        else
        {
            memoization[n] = helper(n-1) + helper (n-2); 
            return memoization[n];
        }
    }
   
    int climbStairs(int n) {
    //memoization
    memoization = vector <int> (n+1, -1);

    return helper(n); 
    //cache - "notebook"
    //for memoization, add recurrence relation to notebook 
    //f(n) = f(n-1) + f(n-2)

   
   

    }
};
