#include <iostream>
#include <vector>;
using namespace std;

void DNFalgo(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
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
    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    DNFalgo(arr);
    printArray(arr);
}