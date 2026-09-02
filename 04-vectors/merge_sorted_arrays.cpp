#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector<int> a = {-3,-1,0};
    vector<int> b = {-2,4};
    vector<int> c;
    int i =0;
    int j = 0;
    while(i<a.size()&&j<b.size()){
    if(a[i]< b[j]){
        c.push_back(a[i]);  
        i++; 
    }
    else if (a[i]> b[j]){c.push_back(b[j]);
    j++;
    }
    
    else if(a[i]==b[j]){
        c.push_back(a[i]);
        i++;
        // j++;
    }

    }
    
    if(i>=a.size()){
        for(;j<b.size();j++){
            c.push_back(b[j]);
        }
    }
    else if (j>=b.size()){
        for(;i<a.size();i++){
            c.push_back(a[i]);
        }
    }
    for(int ele : c){cout<<ele<<" ";}
}
