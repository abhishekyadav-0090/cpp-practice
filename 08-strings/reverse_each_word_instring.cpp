#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void reverse(int i, int j, string &s)
{
    // i = 0;
    // j = s.size()-1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}
void clean(string &s)
{
    int left = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            s[left] = s[i];
            left++;
        }
        else
        {
            if (left > 0 && s[left - 1] != ' ')
            {
                s[left] = s[i];
                left++;
            }
            else if (left > 0 && s[left - 1] == ' ')
            {
                left--;
            }
        }
    }
    if (left > 0 && s[left - 1] == ' ')
    left--;
    cout << s.substr(0, left);
}
int main()
{
    string s = "  Hello World ";
    int i = 0;
    // for(int j = 0;j<s.size();j++){
    //     if(s[j] == ' '){
    //         int k = j-1;
    //         reverse(i,k,s);
    //         i =j+1;
    //     }
    //     else if(j == s.size()-1){
    //         int k = j;
    //         reverse(i,k,s);

    //     }
    // }

    // cout<<s;
    // cout<<endl;
    // reverse(0,s.size()-1,s);
    // cout<<s;

    clean(s);
}