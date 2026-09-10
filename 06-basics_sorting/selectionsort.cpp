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
    vector<int> arr = {0, 6, 1, 0, 2, 0, 3, 0, 4, 5};
    int n = arr.size();

    for(int i = 0; i < n - 1; i++){
        int minIdx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        if(minIdx != i){
            swap(arr[i], arr[minIdx]);
        }
    }

    print(arr);
}
// tc = O(n^2)
// sc = O(1)
