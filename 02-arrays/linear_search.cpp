#include<iostream>
using namespace std;
int main(){
    int arr[7] = {23,34,54,34,34,12,6};
    int target = arr[4];
    for (int i = 0;i<7;i++){
        if ( arr[i] == target ){
            cout<<"Found  "<<arr[i];
        }

    }

}