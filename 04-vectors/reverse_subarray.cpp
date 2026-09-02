// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v = {2,3,45,0,99,56};
//     reverse(v.begin(),v.end());
//     for(int ele : v) cout<<ele<<" ";
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v = {2,3,45,99,56};
//     int rev;
//     int n = v.size();
//     for (int i = 0;i<v.size()/2;i++){
//         v[i] = v[i] + v[n-1-i]-(v[n-1-i] = v[i]);
//     }
//     for(int i = 0; i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void print(vector<int>& arr){
//     for(int ele : arr) cout<<ele<<" ";
//     cout<<endl;
// }

// int main(){
//     vector<int> arr = {10,20,30,40,50};
//     print(arr);
//     int i = 0,j = arr.size()-1;
//     while(i<j){
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
//     print(arr);
// }


//reversing the part of array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>& arr){
    for(int ele : arr) cout<<ele<<" ";
    cout<<endl;
}

int main(){
    vector<int> arr = {10,20,30,40,50};
    print(arr);
    int i = 1,j = 4;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    print(arr);
}