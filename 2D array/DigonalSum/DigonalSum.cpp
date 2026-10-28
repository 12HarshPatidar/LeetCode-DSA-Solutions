#include <iostream>
using namespace std;

int DigonalSum(int matrix[][3], int rows, int cols)
{
    int ans = 0;

    if (rows == cols)
    {

        int n = rows;
        int pd = 0, sd = 0;

        for (int i = 0; i < n; i++)
        {
            pd += matrix[i][i];
            sd += matrix[i][n - i - 1];
        }

        ans = pd + sd;

        if (n % 2 == 1)
        {
            ans -= matrix[n / 2][n / 2];
        }
    }
    return ans;
}

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    cout << "Digonal Sum : " << DigonalSum(mat, rows, cols);
}