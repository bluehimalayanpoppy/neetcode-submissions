class Solution {
public:
    int maxArea(vector<int>& heights) {

        int minHeight = 0; 
        int maxArea = 0;
        
        for (int i = 0; i < heights.size(); ++i)
        {
            for (int j = i + 1; j < heights.size(); ++j)
            {
                if ( (j-i) * min(heights[i], heights[j]) > maxArea)
                {
                    maxArea = (j - i) * min(heights[i], heights[j]); 
                }
                
            }
        }
        return maxArea;
    }
};
