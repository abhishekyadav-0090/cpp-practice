#include <iostream>
using namespace std;

double myPow(double a, int b)
{
    long long n = b;
    if (n == 0)
        return 1;
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            double ans = myPow(a, n / 2);
            return ans * ans;
        }
        else if (n % 2 != 0)
        {
            double ans = myPow(a, n / 2);
            return a * ans * ans;
        }
    }
    else if (n < 0)
    {
        n = abs(n);
        if (n % 2 == 0)
        {
            double ans = myPow(a, n / 2);
            return 1 / (ans * ans);
        }
        else
        {
            double ans = myPow(a, n / 2);
            return 1 / (a * ans * ans);
        }
    }

    return 0;
}

int main()
{
    double a = 2;
    double b = 10;
    cout << myPow(a, b);
}