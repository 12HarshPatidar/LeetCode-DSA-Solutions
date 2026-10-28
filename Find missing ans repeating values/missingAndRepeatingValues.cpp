#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> FindRepetingAndMissingValues(vector<vector<int>> &arr)
{
    vector<int> ans;
    unordered_set<int> s;
    int n = arr.size();
    int a, b;
    int actualSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actualSum += arr[i][j];

            if (s.find(arr[i][j]) != s.end())
            { 
                a = arr[i][j];
                ans.push_back(a);
            }
            s.insert(arr[i][j]);
        }
    }

    int expectedSum = ((n * n) * (n * n + 1)) / 2;
    b = expectedSum + a - actualSum;
    ans.push_back(b);

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};

    vector<int> answer = FindRepetingAndMissingValues(matrix);
    for (int val : answer)
    {
        cout << val << " ";
    }
}