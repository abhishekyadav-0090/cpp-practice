#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){

    vector<vector<int>>v = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0;i<3;i++){
        for(int j = i+1;j<3;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    // for(int i = 0;i<3;i++){
    //     for(int j = 0;j<3/2;j++){
    //         swap(v[i][j],v[i][v.size()-j-1]);
    //     }
    // }

    for(int i = 0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<v[i][j]<<" ";
            
        }
        cout<<endl;
    }
}