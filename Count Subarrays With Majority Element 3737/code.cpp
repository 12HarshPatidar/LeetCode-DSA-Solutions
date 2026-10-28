// leetcode question mnumber 3737
#include <iostream>
#include <vector>
using namespace std;

int countSubarray(vector<int> &arr, int target)
{
    int ans = 0;
    int n = arr.size();
    // i loop = starting index
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        // length = 0
        //  j loop ending index
        for (int j = i; j < n; j++)
        {
            if (arr[j] == target)
            {
                count++;
            }

            int len = j - i + 1; // length++
            cout << len << endl;
            if (count * 2 > len)
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 1, 1, 1};
    int target = 1;
    cout << "Subarray Count : " << countSubarray(arr, target);
}
