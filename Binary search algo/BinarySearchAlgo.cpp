#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(vector<int> &arr, int target)
{

    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int recBinarySearch(vector<int> &arr, int target, int st, int end)
{

    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] > target)
        {
            end = mid - 1;
            return recBinarySearch(arr, target, st, end);
        }
        else if (arr[mid] < target)
        {
            st = mid + 1;
            return recBinarySearch(arr, target, st, end);
        }
        else if (arr[mid] == target)
        {
            return mid;
        }
    }
    return 0;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 8;
    int st = 0;
    int end = arr.size() - 1;
    cout << "Function : " << BinarySearch(arr, target) << endl;
    cout << "Recursive Function : " << recBinarySearch(arr, target, st, end) << endl;
}