class Solution {
public:

    vector <int> memoization;
    int helper (int amount, vector<int> &coins)
    {
        int smallest = INT_MAX; 
        if (amount == 0)
        {
            return 0; 
        }
        if (amount < 0)
        {
            return INT_MAX;
        }
        int needed;
        int oneCacheEntry = 0;
        if (memoization[amount] != -2 )
        {
            return memoization[amount];
        }
       
        for (int i = 0; i < coins.size(); ++i)
        {
            //memoization[x] minimum amount of coins to make amount x 
            needed = (amount - coins[i]);
            int coinsLeft = helper(needed,coins); 
            if (coinsLeft != INT_MAX)
            {
                oneCacheEntry = 1 + coinsLeft; 
                smallest = min (oneCacheEntry, smallest);
            } 
        
            
        
        }
        if (smallest == INT_MAX)
        {
            memoization[amount] = INT_MAX;
            return INT_MAX; 
        }
        memoization[amount] = smallest; 
        return smallest;
        
    }
    int coinChange(vector<int>& coins, int amount) {
        
        memoization = vector<int> (amount +1,-2);

        int answer = helper (amount, coins);
        if (answer != INT_MAX)
        {
            return answer;
        } 
        else
        {
            return -1;
        }

    }
};
