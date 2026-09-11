#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1,3,5,7};
    int target = 8;
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int lb = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            lb = arr[mid];
            break;
        }
        else if(arr[mid]>target){
            high = mid - 1;
            lb = arr[mid];
        }
        else{
            low = mid + 1;
        }
    }
    cout<<lb;



}

//using builtInFunction

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 7};
    int target = 2;

    auto it = lower_bound(arr.begin(), arr.end(), target);

    if (it == arr.end())
        cout << -1;        // every element is smaller than target
    else
        cout << *it;       // smallest value >= target
}
