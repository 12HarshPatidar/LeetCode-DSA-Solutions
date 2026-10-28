#include <iostream>
#include <vector>
using namespace std;

vector<int> SpiralMatrix(vector<vector<int>> &arr)
{
    vector<int> ans;
    int m = arr.size(), n = arr[0].size();

    int srow = 0, erow = m - 1;
    int scol = 0, ecol = n - 1;

    while (srow <= erow && scol <= ecol)
    {

        // top
        for (int i = scol; i <= ecol; i++)
        {
            ans.push_back(arr[srow][i]);
        }

        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            ans.push_back(arr[i][ecol]);
        }

        // bottom
        for (int i = ecol - 1; i >= scol; i--)
        {
            if (srow == erow)
            {
                break;
            }
            ans.push_back(arr[erow][i]);
        }

        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            ans.push_back(arr[i][scol]);
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}};
    vector<int> answer = SpiralMatrix(matrix);

    for (int ans : answer)
    {
        cout << ans << " ";
    }
}