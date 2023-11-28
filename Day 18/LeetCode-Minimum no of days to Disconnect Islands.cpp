class Solution {
public:
    int minDays(vector<vector<int>>& grid) 
    {
        m = grid.size();
        n = grid[0].size();

        if (countIslands(grid) != 1) 
        {
            return 0;
        }

        for (int day = 1; day <= 2; ++day) 
        {
            for (int i = 0; i < m; ++i) 
            {
                for (int j = 0; j < n; ++j) 
                {
                    if (grid[i][j] == 1) 
                    {
                        grid[i][j] = 0;
                        if (countIslands(grid) != 1) 
                        {
                            return day;
                        }
                        grid[i][j] = 1; 
                    }
                }
            }
        }

        return 2;  
    }

private:
    int m, n;

    bool isValid(int i, int j) 
    {
        return i >= 0 && i < m && j >= 0 && j < n;
    }

    void dfs(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& visited) 
    {
        if (!isValid(i, j) || grid[i][j] == 0 || visited[i][j]) 
        {
            return;
        }

        visited[i][j] = true;

        for (const auto& dir : directions) 
        {
            int ni = i + dir[0];
            int nj = j + dir[1];
            dfs(grid, ni, nj, visited);
        }
    }

    int countIslands(vector<vector<int>>& grid) 
    {
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int islandCount = 0;

        for (int i = 0; i < m; ++i) 
        {
            for (int j = 0; j < n; ++j) 
            {
                if (grid[i][j] == 1 && !visited[i][j]) 
                {
                    dfs(grid, i, j, visited);
                    islandCount++;
                }
            }
        }

        return islandCount;
    }

    const vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
};
