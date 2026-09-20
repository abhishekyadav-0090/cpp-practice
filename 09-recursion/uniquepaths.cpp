#include <iostream>
#include <algorithm>
using namespace std;
int paths(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;
    return paths(m, n - 1) + paths(m - 1, n);
}
int main()
{
    int m;
    int n;
    cin>>m>>n;
    cout << paths(m, n);
}