// leetcode question number 189
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void RotateArray(vector<int> &arr, int k)
{
    int n = arr.size();
    k %= n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.begin() + k);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    RotateArray(arr, k);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}