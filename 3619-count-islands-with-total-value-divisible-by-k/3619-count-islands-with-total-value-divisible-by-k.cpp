class Solution {
public:
    int m, n;

    long long dfs(vector<vector<int>> &grid, int row, int col) {

        if(row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == 0) {
            return 0;
        }

        long long sum = grid[row][col];

        grid[row][col] = 0; // Vist marked

        sum += dfs(grid, row, col + 1); // right
        sum += dfs(grid, row, col - 1); // left
        sum += dfs(grid, row - 1, col); // up
        sum += dfs(grid, row + 1, col); // down

        return sum;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();

        int ans = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(grid[i][j] > 0) {

                    long long sum = dfs(grid , i, j);

                    if(sum%k == 0) {
                        ans++;
                    }

                }

            }
        }

        return ans;
    }
};