#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Abhishek Yadav";
    // for(int i = 0;i<s.size();i++){
    //     cout<<s[i];
    // }
    for(char ch : s){
        cout<<ch;
    }
}