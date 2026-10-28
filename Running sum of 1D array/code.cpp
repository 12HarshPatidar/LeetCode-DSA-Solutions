// leetcode question no 1480
#include <iostream>
#include <vector>
using namespace std;

void RunningSum(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }
}

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    RunningSum(arr);
    printArray(arr);
}