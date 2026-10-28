#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int n, int c, int minPossibleDistance)
{
    int cows = 1, lastStallPosition = stalls[0];
    sort(stalls.begin(), stalls.end());

    for (int i = 1; i < n; i++)
    {
        if ((stalls[i] - lastStallPosition) >= minPossibleDistance)
        {
            cows++;
            lastStallPosition = stalls[i];
        }
        if (cows == c)
        {
            return true;
        }
    }
    return false;
}

int AggrassiveCows(vector<int> &stalls, int n, int c)
{
    int ans;
    int st = 1, end = *max_element(stalls.begin(), stalls.end()) - *min_element(stalls.begin(), stalls.end());

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(stalls, n, c, mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 4, 8, 9};
    int n = 5, c = 3;
    cout << AggrassiveCows(arr, n, c);
}