#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    string s = "";
    //string a = "";
    while(n!=0){
        int lastdigit = n%10;
        char ch = lastdigit + 48;
        s.push_back(ch);
        n /= 10;
    }

    // reverse(s.begin(),s.end());
    int i = 0;
    int j = s.size()-1;
    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}

// another way using builtin function


// string s = to_string(n);
// cout<<s<<endl;
//tc O(n);