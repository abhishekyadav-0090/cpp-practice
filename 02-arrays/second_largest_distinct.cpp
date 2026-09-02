#include<iostream>
using namespace std;
int main(){
    int arr[] = {23,4,54,34,44,12,6};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>mx)  mx = arr[i];
    }
    int smx = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>smx && arr[i] != mx) smx = arr[i];
    }

    cout<<mx<<endl;
    cout<<smx<<endl;
}



