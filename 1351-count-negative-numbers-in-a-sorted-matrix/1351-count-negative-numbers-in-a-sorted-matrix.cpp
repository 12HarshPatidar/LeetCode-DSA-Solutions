class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int count = 0;

        for(int i = 0; i < grid.size(); i++) {

            int st = 0;
            int end = grid[i].size() - 1;
            int idx = grid[i].size();

            while(st <= end) {

                int mid = st + (end - st) / 2;

                if(grid[i][mid] < 0) {

                    idx = mid;
                    end = mid - 1;

                } else {

                    st = mid + 1;

                }

            }

            count += grid[i].size() - idx;
        }

        return count;
        
    }
};