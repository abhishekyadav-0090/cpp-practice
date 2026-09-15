#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i = 0;i<s.size();i++){
        if(s[i]>=65 and s[i]<=90){
            s[i] += 32;
        }
        else if(s[i] == ' '){
            s[i] = s[i];
        }
        else{
            s[i] -= 32;
        }
    }
    cout<<s<<endl;
//     char ch = ' ';
// cout << (int)ch;

}