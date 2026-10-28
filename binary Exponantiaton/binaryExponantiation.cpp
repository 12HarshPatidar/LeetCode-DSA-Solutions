#include <iostream>
using namespace std;

double binaryExpontiation(double x, long n)
{
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    double ans = 1;
    long binForm = n;

    if (binForm < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main()
{
    double y = binaryExpontiation(2.10000, -3);
    cout << y;
}