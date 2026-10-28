// leetcode question number 217
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containDuplicate(vector<int> &arr)
{
    int n = arr.size() - 1;
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    cout << containDuplicate(arr);
}