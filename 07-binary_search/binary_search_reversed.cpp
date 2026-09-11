#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {36,25,24,13,12,10};
    

    int target = 25;
    int low = 0;
    //int mid = 0;
    int high = arr.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<target){          
            high = mid -1;
        }
        else if(arr[mid]>target){
            low = mid + 1;
        }
        else if (arr[mid] == target){
            cout << "Element has been found!";
            return 0;
        }
    }
    cout<<"Element Not Found!";
   

}