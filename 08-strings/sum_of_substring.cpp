#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int sum = 0;
    string n = "2345";
    for(int i = 0;i<n.size();i++){
        for(int j = i;j<n.size();j++){
            cout<<n.substr(i,j-i+1)<<" ";
            sum += stoi(n.substr(i,j-i+1));
        }
        
    }
    cout<<endl;
    cout<<sum<<endl;
}