// leetcode question number 509
#include <iostream>
using namespace std;

int FibonacciNumber(int n)
{
    int num1 = 0;
    int num2 = 1;
    int num3;

    if (n == 0)
    {
        return 0;
    }

    while ((n - 1) > 0)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        n--;
    }

    return num3;
}

int main()
{
    int n = 3;
    cout << "F(" << n << ") : " << FibonacciNumber(n);
}