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