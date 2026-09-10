#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> arr = {6,1,2,3,4,5};
    int n = arr.size();
    int outerCount = 0;
    int innerCount = 0;
    for(int i = 0;i<n-1;i++){
        outerCount++;
        int swaps = 0;   // n-1 baar chlna chahiye
        for(int j = 0;j<n-1-i;j++){
            innerCount++;                // optimized aise kr skte h , har baar inner loop ek baar kmm chle toh condition = n-1-i
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
            
        }
        if(swaps==0){
            break;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout << "Outer loop: " << outerCount << endl;
    cout << "Inner loop: " << innerCount << endl;
    
}

//bubble sort -- compares the adjacent elements and swaps them.