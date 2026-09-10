#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void print(vector <int> &arr){
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    vector<int> arr = {6,3,1,0,7,5,4,2};
    int n = arr.size();
    int count = 0;
//     for(int j =0;j<n-1;j++){
//     for(int i = 1;i<n;i++){
//         if(arr[i-1]>arr[i]){
//             swap(arr[i-1],arr[i]);
//             count++;
//         }
//     }
// }
//insertion sort

for(int i = 1; i<n;i++){
    int j = i;
    while(j>=1&&arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
        count++;
    }
}

    print(arr);
    cout<<endl;
    cout<<count<<endl;

}