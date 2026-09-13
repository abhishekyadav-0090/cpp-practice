#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size();
    if(n == 1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];

    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1])
            return arr[mid];

        if(arr[mid] == arr[mid-1]){
            int f = mid - 1;
            int s = mid;
            int leftlen = f - low;
            if(leftlen % 2 != 0)
                high = f - 1;
            else
                low = s + 1;
        }
        else if(arr[mid] == arr[mid+1]){
            int f = mid;
            int s = mid + 1;
            int rightlen = high - s;
            if(rightlen % 2 != 0)
                low = s + 1;
            else
                high = f - 1;
        }
    }
    return -1;
}

int singleNonDuplicate1(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == arr[mid ^ 1])
                low = mid + 1;
            else
                high = mid;
        }

        return arr[low];
    }

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 8, 8, 9};
    cout << singleNonDuplicate(arr) << endl;
    cout << singleNonDuplicate1(arr) << endl;
    return 0;
}
