#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here.*/
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> a;
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<n-1;i++){
        if(v[i]==v[i+1]){
            a.push_back(v[i]);
        }


    }
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    
}