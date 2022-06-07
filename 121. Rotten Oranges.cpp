class Solution 
{
    int R, C;
    public:
    bool issafe(int i, int j){
        if (i >= 0 && i < R && j >= 0 && j < C)
            return true;
        return false;
    }
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        bool changed = false;
        int no = 2;
        R= grid.size();
        C= grid[0].size();
        while (true) {
            for (int i = 0; i < R; i++) {
                for (int j = 0; j < C; j++) {
 
                if (grid[i][j] == no) {
                    if (issafe(i + 1, j) && grid[i + 1][j] == 1) {
                        grid[i + 1][j] = grid[i][j] + 1;
                        changed = true;
                    }
                    if (issafe(i, j + 1) && grid[i][j + 1] == 1) {
                        grid[i][j + 1] = grid[i][j] + 1;
                        changed = true;
                    }
                    if (issafe(i - 1, j) && grid[i - 1][j] == 1) {
                        grid[i - 1][j] = grid[i][j] + 1;
                        changed = true;
                    }
                    if (issafe(i, j - 1) && grid[i][j - 1] == 1) {
                        grid[i][j - 1] = grid[i][j] + 1;
                        changed = true;
                    }
                }
            }
        }
 
        // if no rotten orange found it means all
        // oranges rottened now
            if (!changed)   break;
            changed = false;
            no++;
        }
 
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
 
            // if any orange is found to be
            // not rotten then ans is not possible
                if (grid[i][j] == 1)
                    return -1;
        }
    }
 
    // Because initial value for a rotten
    // orange was 2
        return no - 2;
    }
};
