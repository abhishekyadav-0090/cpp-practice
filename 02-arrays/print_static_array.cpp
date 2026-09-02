#include<iostream>
using namespace std;
int main(){
    int arr[10] = {23,34,54,34,34,12,6};
    int n = sizeof(arr)/4;
    cout<<size(arr)<<endl;
    for (int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}