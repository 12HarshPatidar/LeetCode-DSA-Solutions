#include <iostream>
// #include <utility>
using namespace std;

int RowMaxSum(int mat[][3], int rows, int cols)
{
    int rowMaxSum = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        int sumI = 0;
        for (int j = 0; j < cols; j++)
        {
            sumI += mat[i][j];
        }
        rowMaxSum = max(rowMaxSum, sumI);
    }
    return rowMaxSum;
}

int ColumnMaxSum(int mat[][3], int rows, int cols)
{
    int colMaxSum = INT_MIN;

    for (int i = 0; i < cols; i++)
    {
        int sumJ = 0;
        for (int j = 0; j < rows; j++)
        {
            sumJ += mat[j][i];
        }
        colMaxSum = max(colMaxSum, sumJ);
    }
    return colMaxSum;
}

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2, cols = 3;
    cout << RowMaxSum(mat, rows, cols) << endl;
    cout << ColumnMaxSum(mat, rows, cols) << endl;
}
