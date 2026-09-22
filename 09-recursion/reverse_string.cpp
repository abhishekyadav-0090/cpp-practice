#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}
void rev(int i, int j, vector<char> &s)
{
    if (i >= j)
        return;
    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    rev(i + 1, j - 1, s);
}

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    
    //reverseString(s);
    rev(0, s.size() - 1, s);
    for (char ele : s)
    {
        cout << ele << " ";
    }
}