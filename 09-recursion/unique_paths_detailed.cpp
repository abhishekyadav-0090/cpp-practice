#include <iostream>
#include <algorithm>
using namespace std;
int total = 0;
void paths(int m, int n, string s)
{
    if (m == 1 and n == 1)
    {
        cout << s << endl;
        total++;
        return;
    }
    if (m == 0 || n == 0)
    {
        return;
    }
    paths(m, n - 1, s + "R"); // right side jaa rha hain.
    paths(m - 1, n, s + "D"); // down side jaa rha hain.
}
int main()
{
    int m;
    int n;
    cin >> m >> n;
    paths(m, n, "");
    cout<<total<<endl;
}