#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){


    vector<string> s = {"0123","0023","456","001820"};
    vector<int> n;
    
    for(int i = 0;i<s.size();i++){
        int num = 0;
        for(int j = 0;j<s[i].size();j++){
           
            num = num*10+(s[i][j]-'0');
            //n.push_back(s[i][j] - '0');
        }
        n.push_back(num);
    }

    for(int k = 0;k<n.size();k++){
        cout<<n[k]<<" ";
    }
    // for(int i = 0;i<size(s);i++){
    //     n.push_back(stoi(s[i]));
    // }
    int x = n[0];
    for(int i = 1;i<n.size();i++){
        if(x<n[i]){
            x = n[i];
        }
    }
    cout<<endl;
    cout<<x<<endl;
}