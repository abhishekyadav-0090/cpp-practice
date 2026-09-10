#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {10,12,13,24,25,36};

    int target = 27;
    int low = 0;
    //int mid = 0;
    int high = arr.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target){          
            high = mid -1;
        }
        else if(arr[mid]<target){
            low = mid + 1;
        }
        else if (arr[mid] == target){
            cout << "Element has been found!";
            return 0;
        }
    }
    cout<<"Element Not Found!";

}


// calculation of tc 
// suppose there are n elements 
// after each iteration it is decreased by half .
// like n -> n/2 -> n/4 -> n/2^k 
// it will stop when there will be only one element so 
//  n/2^k = 1
//  after that k = log2(n)