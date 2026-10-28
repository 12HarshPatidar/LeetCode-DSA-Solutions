#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

pair<int, int> BruteForce(vector<int> &arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int first = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int second = arr[j];
            int sum = first + second;
            if (sum == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

pair<int, int> Better(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());

    int st = 0, end = arr.size() - 1;

    while (st < end)
    {
        int sum = arr[st] + arr[end];
        if (sum == target)
        {
            return {st, end};
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
    return {-1, -1};
}

pair<int, int> Optimized(vector<int> &arr, int target)
{
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int first = arr[i];
        int second = target - first;
        if (map.find(second) != map.end())
        {
            return {i, map[second]};
        }
        map[first] = i;
    }
    return {-1, -1};
}

int main()
{
    vector<int> array = {5, 2, 11, 7, 15};
    int target = 9;

    // pair<int, int> ans = BruteForce(array, target);
    // cout << ans.first << " " << ans.second;

    // array after sorting
    // for (int val : array)
    // {
    //     cout << val << " ";
    // }
    // pair<int, int> ans = Better(array, target);
    // cout << endl << ans.first << " " << ans.second << endl;

    pair<int, int> ans = Optimized(array, target);
    cout << endl << ans.first << " " << ans.second << endl;
}