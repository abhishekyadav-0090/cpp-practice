#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(8);
    v.push_back(-6);
    cout<<v.size()<<" "<<v.capacity();
}