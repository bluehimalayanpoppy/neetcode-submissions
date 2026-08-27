class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    
      //2nd pass 
      int max = INT_MIN; 
      set fre = set(nums.begin(), nums.end()); 
      //0,3,2,5,4,6,1 

     vector<int> count = {0}; 
     int j = 0; 
      //when processing a number x, only start counting a new sequence if x - 1 does not exist in the  set

        //turning set as vector 
        vector change = vector(fre.begin(), fre.end());
      //0,1,2,3,4,5,6, 10,11,12,
      for (int i = 0; i < change.size(); ++i)
      {
        //if you cant find -1 start count 
        //increase count if you can find nums[i]-1
        if (fre.find(change[i]-1) == fre.end())
        {
            //at i =0 
            //cant find -1 
            //so count[0] = 1;
            //add new slot 
            count[j]++;
            count.push_back(0); 
            j++; 
        }
        else 
        {
            count[j-1]++; 
        }
      }
      //returns iterator 
      return *std::max_element(count.begin(), count.end()); 

    }
};
