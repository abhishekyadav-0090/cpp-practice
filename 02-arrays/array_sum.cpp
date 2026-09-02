#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30+80};
    int sum = 0;
    for(int i = 0;i<3;i++){
             sum = sum+arr[i];
    }
    cout<<sum<<" ";
}