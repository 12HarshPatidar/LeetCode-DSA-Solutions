//leetCode question no 75

#include <iostream>
#include <vector>
using namespace std;

void sortArray(vector<int> &arr, int n)
{
    int zero = 0, ones = 0, twos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            ones++;
        }
        else if (arr[i] == 2)
        {
            twos++;
        }
    }

    int idx = 0;
    for (int i = 0; i < zero; i++)
    {
        arr[idx++] = 0;
    }
    for (int i = 0; i < ones; i++)
    {
        arr[idx++] = 1;
    }
    for (int i = 0; i < twos; i++)
    {
        arr[idx++] = 2;
    }
}

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int n = arr.size();
    sortArray(arr, n);
    printArray(arr, n);
}