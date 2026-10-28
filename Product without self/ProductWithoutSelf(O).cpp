// leetcode question no 238
#include <iostream>
#include <vector>
using namespace std;

vector<int> ProductWithoutSelf(vector<int> &nums)
{
    vector<int> ans(nums.size(), 1);
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
            {
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {4, 3, 2, 1};
    vector<int> Ans = ProductWithoutSelf(nums);

    for (int i = 0; i < Ans.size(); i++)
    {
        cout << Ans[i] << " ";
    }
}