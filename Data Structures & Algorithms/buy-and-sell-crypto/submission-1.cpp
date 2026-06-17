class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
       int minPrice = 10000000; 
       int largestProfit = -1000000; 
       for (int i = 0; i < prices.size(); ++i)
       {
         if (prices[i] < minPrice)
         {
            minPrice = prices[i];
         } 
         
         //if i sold today what profit using the cheapest buy
         if (prices[i] - minPrice > largestProfit)
         {
            largestProfit = prices[i] - minPrice;
         }
       }
       return largestProfit;  
    }
};
