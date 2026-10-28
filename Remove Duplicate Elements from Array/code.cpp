//leetcode question no 26
#include <iostream>
#include <vector>
using namespace std;

void removeDuplicateElements(vector<int> &arr)
{
    int i = 0;
    int j = 1;

    while (j < arr.size())
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            i++;
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int k = 0; k <= i; k++)
    {
        cout << arr[k] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3};
    removeDuplicateElements(arr);
}