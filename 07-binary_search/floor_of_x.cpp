#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
 vector<int> arr = {1,3,5,7};
 int target =4;
 int n = arr.size();
    int low = 0;
    int high = n - 1;
    int idx = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]<=target){
            low = mid + 1;
            idx = mid;
        }
        else{
            high = mid -1;
        }
    }
    cout<<idx;

}