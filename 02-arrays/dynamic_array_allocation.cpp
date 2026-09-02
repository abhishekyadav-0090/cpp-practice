#include<iostream>
using namespace std;
int main(){
    //int arr[7];//static allocation
    int* brr = new int[7]();//dynamic allocation
    brr[0]= 4;
    brr[1] = 5;
    for(int i = 0;i<7;i++){
        cout<<brr[i]<<" ";
    }
}