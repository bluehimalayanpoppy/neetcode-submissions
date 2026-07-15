class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        for (int i = 0; i < matrix.size(); ++i)
        {
            for (int j = i; j < matrix.size(); ++j)
            {
                //transpose matrix, switch rows and columns 
                //swap, no assignment, upper right triangle 
                swap(matrix[i][j], matrix[j][i]); 
                //now 
                //1 3 
                //2 4 

            
            }
             
        }

         for (int i = 0; i < matrix.size(); ++i)
        {
            for (int j = 0; j < matrix.size()/2; ++j)
            {
                //swap columns, only go halfway
                swap(matrix[i][j], matrix[i][matrix[0].size()-1-j]);
            }
        }

            
       
        
    }
};
