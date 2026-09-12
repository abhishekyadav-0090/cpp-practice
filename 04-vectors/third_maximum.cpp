// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>

// #include <cstdlib>
// using namespace std;
// int main(){

    
//     int arr[] = {4, 1, 9, 7, 2};
//     int mx = arr[0];
    
//     for(int i =0;i<size(arr);i++){
//         if( mx < arr[i]){
//             mx = arr[i];
//         }
//     }
//     int smx = INT_MIN;
//     for(int i = 0;i<size(arr);i++){
//         if(smx<arr[i] && arr[i] != mx){
//             smx = arr[i];
//         }
//     }
//     int tmx = INT_MIN;
//      for(int i = 0;i<size(arr);i++){
//         if(tmx<arr[i] && arr[i] != mx && arr[i] != smx){
//             tmx = arr[i];
//         }
//     }

//     cout<<tmx<<endl;

// }

//another method

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

#include <cstdlib>
using namespace std;
int main(){


    int arr[] = {4, 1, 9, 7, 2,5};
    for(int i = 0; i < 3; i++) {
    int mx = INT_MIN;
    int in = i;

    for(int j = i; j < size(arr); j++) {
        if(mx < arr[j]) {
            mx = arr[j];
            in = j;
        }
    }

    swap(arr[i], arr[in]);
}

cout << arr[2];
}
