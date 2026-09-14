#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Abhishek";
    // string v = "Yadav";
    // cout<<s+v<<endl;
    s.pop_back();
    s.push_back('Y');//only accepts single char 
    s.append("OM");//it can accept string
    cout<<s<<endl;

    //sort(s.begin(),s.end()); // sorting is done using ascii values .

    //cout<<s<<endl;
}