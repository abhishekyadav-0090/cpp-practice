#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[][4] = {{2,3,2,4},{2,3,23,4},{4,2,1,4}};
    int sum = 0;
    int max = INT_MIN;
    int ind ;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            sum += arr[i][j]; 
        }
        if(sum>max){
            max = sum;
            ind = i;

        } 
         sum = 0;
    }
    cout<<max<<" "<<ind;
}

 