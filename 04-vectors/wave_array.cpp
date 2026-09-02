#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {10,5,6,3,2,20,100,80};
    for(int i =0;i<v.size()-1;i++){
        if(i%2!=0&&v[i]>v[i+1]){
            swap(v[i],v[i+1]);
        }
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}