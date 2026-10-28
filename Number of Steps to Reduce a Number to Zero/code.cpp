// leetcode question no 1342
#include <iostream>
using namespace std;

int Steps_to_reduce_num_to_zero(int nums)
{
    int steps = 0;

    while (nums > 0)
    {
        if (nums % 2 == 0)
        {
            nums /= 2;
        }
        else
        {
            nums -= 1;
        }
        steps++;
    }

    return steps;
}

int main()
{
    int nums = 123;
    cout << "Steps to reduce number to zero : " << Steps_to_reduce_num_to_zero(nums);
}