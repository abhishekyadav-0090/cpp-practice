#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[][4] = {{2,3,2,5},{2,3,23,4},{3,2,1,0}};
    int sum = 0;
    
    int ind = INT_MAX;
    for(int i = 0;i<3;i++){
        int max = INT_MIN;
        for(int j = 0;j<4;j++){
           if (max < arr[i][j]){
            max = arr[i][j];
           }
        }
        if(ind>max)
        {
            ind = max;
        }

    }
    cout<<ind;
}
       
