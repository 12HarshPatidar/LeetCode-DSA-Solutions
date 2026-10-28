#include <iostream>
// #include <utility>
using namespace std;

pair<int, int> linearSearch(int mat[][3], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == target)
            {
                return {i, j};
            }
        }
    }
    return {-1,-1};
}

bool LinearSearch(int mat[][3], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    // cout << LinearSearch(mat, rows, cols, 8);
    pair<int , int> ans = linearSearch(mat, rows, cols, 8);
    cout << ans.first << " " << ans.second;
}