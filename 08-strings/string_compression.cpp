#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){


    string s = "abbbbbbbbbbbb";
    int n = s.size() ;
    vector<pair<char,int>> a;
    
    int left = 0;
    for(int i = 0;i<n;i++){
        int l = 0;
        if(s[i] != s[i+1]){
            l = i - left+1;
            left = i+1;
            a.push_back({s[i],l});
        }
    }
    for(auto x : a)
    cout << x.first << " " << x.second << endl;

}