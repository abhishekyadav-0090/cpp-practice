#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v = {2,3,45,98,54,99,56};
    int n = v.size();
    int k = 2;
    if (k>n){
        k = k%n;
    }
    for(int i = n-k;i<n;i++){
        cout<<v[i]<<" ";
    }
    for(int i = 0;i<n-k;i++){

        
        cout<<v[i]<<" ";
        
    
    }
    cout<<"Brute Force Solution:";
    //for (int ele : v) cout<<ele<<" ";
    
    }

    // void reverse(vector<int>& arr,int i,int j){
    //     while(i<j){
    //         swap(arr[i],arr[j]);
    //         i++;
    //         j--;
    //     }
    // }
    // void rotate(vector<int>&arr,int k) {
    //     int n = arr.size();
    //      k = k%n;
    //     reverse(arr,0,n-1);
    //     reverse(arr,0,k-1);
    //     reverse(arr,k,n-1);
    // }