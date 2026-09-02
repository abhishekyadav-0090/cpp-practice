#include<iostream>
#include<vector>
using namespace std;
int main(){


    int m,n;
    m = 3;
    n = 4;
    vector<vector<int>> arr(m,vector<int>(n,-1));
    arr.push_back(vector<int>(4,-2));
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}