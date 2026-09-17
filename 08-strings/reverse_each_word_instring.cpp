#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void reverse(int i,int j,string &s){
    // i = 0;
    // j = s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
int main(){
    string s = "The Sky is Blue";
    int i = 0;
    for(int j = 0;j<s.size();j++){
        if(s[j] == ' '||j == s.size()-1){
                //j = j-i;
            reverse(i,j,s);
            i =j+1; 
        }
    }

    cout<<s;
}