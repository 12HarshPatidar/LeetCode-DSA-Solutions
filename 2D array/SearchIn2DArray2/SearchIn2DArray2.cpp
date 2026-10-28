#include <iostream>
#include <vector>
using namespace std;

pair<int, int> SearchIn2DArray2(vector<vector<int>> arr, int m, int n, int target)
{
    int row = 0, col = n - 1;

    while (row < m && col >= 0)
    {
        if (target == arr[row][col])
        {
            return {row, col};
        }
        else if (target < arr[row][col])
        {
            col--;
        }
        else
        {
            row++;
        }
    }

    return {-1, -1};
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15},
                                  {2, 5, 8, 12, 19},
                                  {3, 6, 9, 16, 22},
                                  {10, 13, 14, 17, 24},
                                  {18, 21, 23, 26, 30}};

    int m = matrix.size(), n = matrix[0].size();
    int target = 30;
    pair<int, int> ans = SearchIn2DArray2(matrix, m, n, target);
    cout << ans.first << " " << ans.second;
}