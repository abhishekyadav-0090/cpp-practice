#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){

    int arr[][4] = {{2,3,2,5},{2,3,23,4},{4,2,1,0}};
    for(int i = 0;i<3;i++){
        if(i%2==0){
            for(int j = 0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
        for(int k = 3;k>=0;k--){
            cout<<arr[i][k]<<" ";
        }
        }
    }
    
}