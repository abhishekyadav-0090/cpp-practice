#include<iostream>
#include<vector>
using namespace std;
void print_forward(vector<int>& arr,int i){
    if(i>=arr.size()) return;
    cout<<arr[i]<<" ";
    print_forward(arr,i+1);
}
void print_backward(vector<int>& arr,int i){
    if(i<0) return;
    cout<<arr[i]<<" ";
    print_backward(arr,i-1);
}
int main(){
    vector<int> arr = {1,22,3,34,5,65,5};
    print_forward(arr,0);
    cout<<endl;
    print_backward(arr,6);
}