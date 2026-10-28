// leetcode question no 26
#include <iostream>
#include <vector>
using namespace std;

void removeDuplicateElements(vector<int> &arr)
{
    int i = 0;

    for (int j = 1; j < arr.size(); j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    cout << "Unique elements: ";
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