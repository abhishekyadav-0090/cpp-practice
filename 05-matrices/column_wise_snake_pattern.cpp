#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){

    int arr[][4] = {{2,3,2,5},{2,3,23,4},{4,2,1,0},{1,5,7,9}};
    for(int i = 0;i<4;i++){
        if(i%2==0){
            for(int j = 3;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int k = 0;k<4;k++){
                cout<<arr[k][i]<<" ";
            }
        }
    }



}