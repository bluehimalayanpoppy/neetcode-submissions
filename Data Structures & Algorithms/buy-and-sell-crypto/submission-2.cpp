class Solution {
public:
    int maxProfit(vector<int>& prices) {
      //2nd pass 

      int min = INT_MAX; 
      int current = INT_MIN;
      int max = INT_MIN;
      //add each to hashmap 
      for (int i = 0; i < prices.size(); ++i)
      {
         if (prices[i] < min)
         {
            min = prices[i]; 
         }

         if (prices[i]-min > current)
         {
            current = prices[i]-min;
         }

         if (current > max)
         {
            max = current;
         }
      }
      return max;
        
    }
};
