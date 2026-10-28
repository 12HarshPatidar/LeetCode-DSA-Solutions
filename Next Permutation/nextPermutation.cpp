//leetcode question no 31
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int pivot)
{
    int i = pivot + 1, j = arr.size() - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    return;
}

void nextPermutation(vector<int> &arr)
{
    int n = arr.size();

    // find the pivot
    int pivot = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            pivot = i;
            break;
        }
    }

    // agar arr = 5,4,3,2,1
    if (pivot == -1)
    {
        reverseArray(arr, pivot);
        return;
    }

    // find righ most element > pivot
    for (int i = n - 1; i > pivot; i--)
    {
        if (arr[i] > arr[pivot])
        {
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    // reverse the array from pivot + 1
    reverseArray(arr, pivot);
    // int i = pivot + 1, j = n - 1;
    // while (i <= j)
    // {
    //     swap(arr[i], arr[j]);
    //     i++;
    //     j--;
    // }
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
    vector<int> arr = {2, 3, 1};
    nextPermutation(arr);
    printArray(arr);
}