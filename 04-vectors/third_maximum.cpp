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
    //int mx = INT_MIN;
    int in = 0;
    int b[10];
    for(int i = 0;i<size(arr);i++){
        int mx = INT_MIN;
        for(int j = i;j<size(arr);j++){
        if(mx<arr[j]){
            mx = arr[j];
            in = j;
        }
            
    }

        b[i] = mx;
        int s = arr[i];
        arr[i] = arr[in];
        arr[in] = s; 
        
}
cout<<arr[2]<<'\n';
cout<<b[2];
}
