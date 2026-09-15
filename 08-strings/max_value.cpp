#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){


    vector<string> s = {"0123","0023","456","001820"};
    vector<int> n;
    for(int i = 0;i<s.size();i++){
        for(int j = 0;j<s[i].size();j++){
            n.push_back(s[i][j] - '0');
        }
    }

    for(int k = 0;k<n.size();k++){
        cout<<n[k];
    }
    // for(int i = 0;i<size(s);i++){
    //     n.push_back(stoi(s[i]));
    // }
    // int x = n[0];
    // for(int i = 1;i<n.size();i++){
    //     if(x<n[i]){
    //         x = n[i];
    //     }
    // }
    // cout<<x<<endl;
}