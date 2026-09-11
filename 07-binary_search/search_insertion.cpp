#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
 vector<int> arr = {1,3,5,7};
 int target =0;
 int n = arr.size();
    int low = 0;
    int high = n - 1;
    int m = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            m = mid;
            break;
        }
        else if(arr[mid]<target){
            low = mid+1;
            m = low;
        }
        else{
            high = mid - 1;
            m = high + 1;
        }
    }
    cout<<m;
    }

