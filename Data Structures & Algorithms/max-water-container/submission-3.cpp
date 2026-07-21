class Solution {
public:
    int maxArea(vector<int>& heights) {
    
   
   
    int max = 0; 
    for ( int i = 0; i < heights.size(); ++i)
    {
        //for i = 0, while loop checks
        //i = 1, j = 4 
        // i = 2, j = 4
        // i = 3, j = 4
        int left = i; 
        int right = heights.size() - 1;
        while (left < right)
        {  int current = min(heights[left], heights[right]) * (right - left); 
            if (current > max) 
            {
                max = current; 
            } 
            //shorter wall is the limiting factor 
            if (heights[left] < heights[right])
            {
                left++;
            }
            //if right height is shorter we won't use it again 
            else if (heights[right] <= heights[left])
            {
                right--;
            }
        }

    }
    return max;
    }
};
