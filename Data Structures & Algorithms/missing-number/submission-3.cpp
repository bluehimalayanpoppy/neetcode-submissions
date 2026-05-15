class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int max = 0; 
        for (int i = 0; i < nums.size(); ++i) 
        {
            for (int j = i +1 ; j < nums.size(); ++j)
            {
                //swap values here
                if (nums[j] < nums[i])
                {
                    int one = nums[i];
                    int two = nums[j]; 
                    nums[i] = two;  
                    nums[j] = one; 
                }
            }
            
        }

        int greatestNum = nums[nums.size()-1];
        // 0, 1, 4

        //i = 0,1,2 


        //greatestNum is 4
        //0,1,2,3,4
        //0,1,4 
        for (int i = 0; i <= greatestNum; ++i) 
        {
            if (nums[i] != i)
            {
                return i; 
            }

        }
        return nums.size(); 

    }
    
};
