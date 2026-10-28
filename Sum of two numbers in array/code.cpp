// leetcode question number 167
#include <iostream>
using namespace std;

pair<int, int> sumOf2Numbers(int arr[], int n, int target)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            return {i + 1, j + 1};
        }
        else if (arr[i] + arr[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return {-1, -1};
}

int main()
{
    int arr[] = {2, 7, 11, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    pair<int, int> p = sumOf2Numbers(arr, size, target);
    cout << "index1 : " << p.first << endl;
    cout << "index2 : " << p.second << endl;
}