#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {


vector<int> arr = {-10,-8,-5,-4,-3,-2,-1,2,4,5};
vector<int> ans;
int n = arr.size();
int low = 0;
int high = n-1;
int idx = -1;
int idx1 = -1;
while(low<=high){
    int mid = low + (high - low)/2;
    if(arr[mid] == 0){
        low = mid + 1;
    }
    else if (arr[mid]<0){
        low = mid + 1;
        idx = mid;
    }
    else{
        high = mid - 1;
    }
}
//ans.push_back(idx+1);
cout<<idx+1<<" ";
low = 0;
high = n-1;
while(low<=high){
    int mid = (low + high)/2;
    if(arr[mid] == 0){
        low = mid + 1;
    }
    else if(arr[mid]>0){
        high = mid - 1;
        idx1 = mid;
    }
    else{
        low = mid + 1;
    }
}
cout<<n-idx1<<endl;

}