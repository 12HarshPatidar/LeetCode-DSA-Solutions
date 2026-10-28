// leetcode question no 1281
#include <iostream>
using namespace std;

int Difference_of_product_and_sum(int nums)
{
    int product = 1;
    int sum = 0;

    while (nums > 0)
    {
        int lastDigit = nums % 10;
        product *= lastDigit;
        sum += lastDigit;
        nums /= 10;
    }

    return product - sum;
}

int main()
{
    int nums = 234;
    cout << "Difference between product and sum : " << Difference_of_product_and_sum(nums);
}