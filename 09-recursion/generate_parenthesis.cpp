#include <iostream>
#include <vector>
using namespace std;

void generate(string s, int a, int b, int n, vector<string> &ans)
{
    if (b == n)
    {
        ans.push_back(s);
        return;
    }
    if (a < n)
        generate(s + "(", a + 1, b, n, ans);
    if (b < a)
        generate(s + ")", a, b + 1, n, ans);
}

int main()
{
    vector<string> ans;
    int n = 3;
    generate("", 0, 0, n, ans);
    for (string s : ans)
    {
        cout << s << endl;
    }
}