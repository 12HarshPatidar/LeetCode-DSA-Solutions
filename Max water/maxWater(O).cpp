//leetcode question no 11

#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int> &height)
{
     int maxWater = 0;
        int lp = 0,rp = height.size()-1;

        while(lp < rp){
            int w = rp - lp;
            int h =  min(height[lp],height[rp]);
            int currWater = w * h;
            maxWater = max(maxWater,currWater);
            
            height[rp] > height[lp] ? lp++ : rp--;
        }
        return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxWater(height);
}