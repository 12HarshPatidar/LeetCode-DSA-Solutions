#include <iostream>
// #include <vector>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            return;
        }
    }
}

void printArray(int arr[], int n)
{
    cout << "[ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "]";
}

int main()
{
    // vector<int> arr = {4, 1, 5, 2, 3};
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, 5);
    printArray(arr, n);
}