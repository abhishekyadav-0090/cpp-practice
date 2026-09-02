#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector<int> v = {10,20,30,40};
    vector<int>ans;
    int target = 50;
    bool found = false;
   for(int i =0;i<v.size()&& !found;i++){
    for(int j = v.size()-1;j>i;j--){
        if(target == v[i]+v[j]){
            ans.push_back(i);
            ans.push_back(j);
            found = true;
            break;
            
        }
        
    }
   }

    for(int ele : ans) cout<<ele<<" ";

}

//Time Complexity : O(n*n)