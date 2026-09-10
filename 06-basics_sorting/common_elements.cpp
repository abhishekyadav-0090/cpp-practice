#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr1 = {10,12,13,24,25,36,13};
    vector<int> arr2 = {11,10,12,13,23,24,13};
    vector<int> ans;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    print(arr1);
    cout<<endl;
    print(arr2);
    cout<<endl;
    // for(int i = 0;i<arr1.size();i++){
    //     for(int j =0;j<arr2.size();j++){
    //         if(arr1[i] == arr2[j]){
    //             arr3.push_back(arr1[i]);
    //         }
    //     }
    // }
    // print(arr3);


    int i =0 ,j = 0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
             i++;
            j++;
        }
       else if(arr1[i]>arr2[j]){
        j++;
       }
       else{
        i++;
       }
    }

    print(ans);
    
}
