#include <iostream>
#include <vector>
using namespace std;
int arrangeCoins(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if ((n - i) >= 0)
        {
            n = n - i;
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{
    int n = 5;
    cout << arrangeCoins(n) << endl;
}
