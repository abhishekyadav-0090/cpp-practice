#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    string s = "Abhishek";
    // for(int i = s.size()-1;i>=0;i--){
    //     cout<<s[i];
    // }
    int i = 0;
    int j = s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s<<endl;

}