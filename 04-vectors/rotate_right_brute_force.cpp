#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

#include <cstdlib>
using namespace std;
int main(){


    vector<int> a = {1,2,3,4,5,6,7};
    vector<int> b;
    int X = 2;
    int Y = 1;
    for(int i = a.size() - X;i<a.size();i++){
        b.push_back(a[i]);
    }
    
    for(int i= 0;i<a.size()-X;i++){
        b.push_back(a[i]);
    }
    
    
    for(int i = Y;i<a.size();i++){
        cout<<b[i]<<" ";
    }

    for(int i = 0;i<Y;i++){
        cout<<b[i]<<" ";
    }
    

    //  for(int i = 0;i<a.size();i++){
    //     cout<<b[i]<<" ";
    // }

}