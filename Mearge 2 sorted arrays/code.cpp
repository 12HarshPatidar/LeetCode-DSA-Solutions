#include <iostream>
#include <vector>
using namespace std;

void Mearge2SortedArrays(vector<int> &A, vector<int> &B, int m, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] < B[j])
        {
            A[idx--] = B[j--];
        }
        else
        {
            A[idx--] = A[i--];
        }
    }

    while (j >= 0)
    {
        A[idx--] = B[j--];
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
    vector<int> A = {4, 5, 6, 0, 0, 0};
    vector<int> B = {1, 2, 3};
    int m = 3, n = 3;
    Mearge2SortedArrays(A, B, m, n);
    printArray(A);
}