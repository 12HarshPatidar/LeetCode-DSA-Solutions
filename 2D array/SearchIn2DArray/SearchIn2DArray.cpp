#include <iostream>
#include <vector>
using namespace std;

pair<int, int> SearchIn2DArray(vector<vector<int>> &arr, int rows, int cols, int target)
{
    int str = 0, endr = rows - 1;

    while (str <= endr)
    {
        int midr = str + (endr - str) / 2;

        if (arr[midr][0] <= target && arr[midr][cols - 1] >= target)
        {
            int st = 0, end = cols - 1;

            while (st <= end)
            {
                int mid = st + (end - st) / 2;

                if (arr[midr][mid] == target)
                {
                    return {midr, mid};
                }
                else if (arr[midr][mid] > target)
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
        }
        else if (arr[midr][0] < target)
        {
            str = midr + 1;
        }
        else
        {
            endr = midr - 1;
        }
    }
}

pair<int, int> SearchIn2DArray2(vector<vector<int>> &arr, int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][cols - 1] >= target && arr[i][0] <= target)
        {
            int st = 0, end = cols - 1;

            while (st <= end)
            {
                int mid = st + (end - st) / 2;

                if (arr[i][mid] == target)
                {
                    return {i, mid};
                }
                else if (arr[i][mid] > target)
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = mat.size(), cols = mat[0].size(), target = 1;

    pair<int, int> ans = SearchIn2DArray(mat, rows, cols, target);
    cout << ans.first << " " << ans.second;
}