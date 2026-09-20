#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    for (int i = min(a, b); i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 1;
}

int gcd_recursion(int a, int b)
{
    if (a == 0)
        return b;
    return gcd_recursion(b % a, a);
}
int main()
{
    int a, b;
    cout << "Enter the 2 numbers: ";
    cin >> a >> b;
    cout << gcd_recursion(a, b) << endl;
    cout << gcd(a, b);
}