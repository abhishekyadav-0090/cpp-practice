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
    vector<int> arr = {10,12,13,24,25,36};
    int n = arr.size();
    int target;
    cout<<"Enter the target number"<<endl;
    cin>>target;
    int i = 1;
    int j = arr.size()-1;
    while(i<j){
        if(arr[i]+arr[j]>target){
            j--;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
        else if(arr[i] + arr[j] == target){
            cout<<i+1<<" "<<j+1;
            break;
        }
    }

    // cout<<i<<" "<<j;

}