#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30};
    int product = 1;
    for(int i = 0;i<3;i++){
             product = product*arr[i];
    }
    cout<<product<<" ";
}
