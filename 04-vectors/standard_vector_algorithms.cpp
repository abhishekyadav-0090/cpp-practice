#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v = {2,3,45,0,99,56};
    sort(v.begin(),v.end());
    
    for (int ele : v) cout<<ele<<" ";
    cout<<endl;
    reverse(v.begin()+1,v.end());
    for (int ele : v) cout<<ele<<" ";


}