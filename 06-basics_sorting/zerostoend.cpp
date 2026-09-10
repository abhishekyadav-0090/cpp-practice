#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> arr = {0,6,1,0,2,0,3,0,4,5};
    int n = arr.size();
    for(int i =0 ;i<n-1;i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j] == 0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}