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
    vector<int> arr = {7,4,5,2,6,1,3};
    int n = arr.size();
    int k ;
    cout<<"enter the kth smallest element"<<endl;
    cin>>k;
    for(int i =0;i<k;i++){
        int minIdx = i;
        for(int j = i+1;j<n ;j++){
           if (arr[j]<arr[minIdx]){
            minIdx = j;
           }
        }
        if(i!=minIdx){
            swap(arr[i],arr[minIdx]);
        }
    }
    print(arr);
    cout<<endl;
    cout<<arr[k-1]<<endl;

}