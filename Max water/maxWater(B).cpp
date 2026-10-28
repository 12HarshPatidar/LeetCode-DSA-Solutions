#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int> &height)
{
    int MW = 0;

    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int w = j - i;
            int ht = min(height[i], height[j]);
            int area = w * ht;
            MW = max(MW, area);
        }
    }
    return MW;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxWater(height);
}