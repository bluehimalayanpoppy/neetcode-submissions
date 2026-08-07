class Solution {
public:
    int findMin(vector<int> &nums) {
    
    int left = 0; 
    int right = nums.size()-1;
    //alr sorted
    if(nums[left] < nums[right])
    {
        return nums[left]; 
    }
    while (left < right)
    {
        int mid = left +  (right - left)/2;
        //find rotation break
        //minimum at right sorted part 
        if (nums[mid] > nums[right])
        {   // 6 > 1 so its not 6 
            //2nd time  6 1 
            //mid = 6
            left = mid+1; 
        }
        //3 4 5 6 1 2 
        //3 4 5 6, 1 2
        else
        {// at 6 1 2
            //smallest could be 6 or 1
            //dont remove mid yet
            right = mid; 
             //so search 6 1
        }
    }
    return nums[left];
    }
    
};
