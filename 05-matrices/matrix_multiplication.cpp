#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<vector<int>> a ={{2,4,5},{4,5,1}};
    vector<vector<int>> b ={{3,4},{7,5},{1,2}};
    vector<vector<int>> res(a.size(),vector<int>(b[0].size(),0)) ;
    for(int i = 0;i<a.size();i++){
        for(int j = 0;j<b.size();j++){
           for(int k = 0;k<b.size();k++){
            res[i][j] += a[i][k] * b[k][j];
           }
        }
    }

    for(int i =0;i<res.size();i++){
        for(int j = 0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }



}