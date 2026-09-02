#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    //int arr[3][4];
    int arr[][4] = {{2,3,2,4},{2,3,23,4},{4,2,1,4}};
    int max = arr[0][0];
    for(int i = 0;i<3;i++){
        
        for(int j = 0;j<4;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }

        }
        cout<<endl;
        
    }
    cout<<max;

}

