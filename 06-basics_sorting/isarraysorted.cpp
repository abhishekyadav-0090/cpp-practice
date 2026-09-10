#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){

    int a [] = {1,2,3,4,5,6,9,8,9};
    for(int i = 0;i<=size(a)-2;i++){
        if(a[i]>a[i+1]){
            cout<<"Array is not sorted";
        }
    }
}