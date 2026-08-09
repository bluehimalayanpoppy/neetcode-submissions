class Solution {
public:
    int numRows; 
    int numColumns; 
    //should be same # of rows and col as grid


    vector<vector<bool>> visited; 
    int numIslands(vector<vector<char>>& grid) {
        
        numRows = grid.size(); 
        numColumns = grid[0].size(); 
        visited = vector<vector<bool>>(numRows, vector<bool>(numColumns,false));
        int numIslands = 0; 
        vector<vector<char>> traverse;

        for (int r = 0; r < grid.size(); ++r)
        {
            for (int c = 0; c < grid[0].size(); ++c)
            {
                //if its unvisited land, dfs checks connected land 
                if (grid[r][c] == '1' && visited[r][c] == 0)
                {
                    numIslands++;
                    surrounding(r,c, grid);
                }
            }
        }
        return numIslands;
        
        
    }

    void surrounding(int r, int c, vector<vector<char>>& grid )
    {   
        //base: if its water or if if its alr visited
        if ( r >= numRows || c >= numColumns || r < 0 || c < 0)
        {
            return; 
        }
        //can't access if its invalid index
        else if (grid[r][c] == '0' || visited[r][c] == 1)
        { 
            return; 
        }
        visited[r][c] = 1;
        //diagonally doesnt count
        surrounding(r+1, c, grid);
        surrounding(r-1, c, grid);
        surrounding(r, c+1, grid);
        surrounding(r, c-1, grid);
    }
};
