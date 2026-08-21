class Solution {
public:
    int search(vector<int>& nums, int target) {

    
        int left = 0; 
        int right = nums.size()-1; 

        int mid;
        //3,4, 5,6,1,2  target is 1 
        //[3 4 5], [6 1 2]
        //5 6 7 1 2 target is 6 
        // left = 5, right = 2, mid = 7

        //while there are still positions
        while (left <= right)
        {
            mid = left +  (right - left)/2;
            if (nums[mid] == target)
            {
                return mid;
            }
            //left side is sorted
            //[ 3 1 ]
            if (nums[left] <= nums[mid])
            {  
                //when targets in range of left half keep left half 
                if (target >= nums[left] && target <= nums[mid])
                {
                    right = mid -1;
                } 
                else
                {
                    left = mid +1; 
                }
            }
            //right side is sorted 
            else
            {   //4 5 | 1 2 3 4
                //if targets in the right half 
                //if its 1 
                if (target >= nums[mid] && target <= nums[right])
                {
                    left = mid +1;
                }
                else
                {
                    right = mid -1; 
                }

            }
    }
    
    return -1;
   
    }
};
