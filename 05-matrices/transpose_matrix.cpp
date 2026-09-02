#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){

    vector<vector<int>>arr = {{2,3,2,5},{2,3,23,4},{4,2,1,0},{2,4,2,8}};
    int m = arr.size();
    int n = arr[0].size();
    // for(int i = 0;i<m;i++){
    //     for(int j = 0;j<n;j++){
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }

    for(int j = 0;j<n;j++){
        for(int i = 0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
    }
}