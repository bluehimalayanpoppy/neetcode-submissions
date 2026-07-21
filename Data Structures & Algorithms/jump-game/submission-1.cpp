class Solution {
public:
    bool canJump(vector<int>& nums) {

        //1,2,0,1,0
        //pointer = 1,2,1 

        int farthest = 0; 
        //destination = current index + jump length
        for ( int i = 0; i < nums.size(); ++i)
        { 
            //farthest += nums[i] + i;  
            if ( i <= farthest) 
            {
                farthest = max(farthest,nums[i] + i);  
            }
            if (farthest >= nums.size()-1 )
            {
                return true;
            }
           
        }
         return false;
    
    }
};
