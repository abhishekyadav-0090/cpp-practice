#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> arr = {-1, -1, 0, 1, 2, 2, 2, 3, 4, 5, 6};
    vector<int> ans(2, -1);

    int target = 90;

    int low = 0;
    int high = arr.size() - 1;

    int low1 = 0;
    int high1 = arr.size() - 1;

    // Find first occurrence
    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            high = mid - 1;
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (low <= arr.size() - 1 && arr[low] == target) {
        ans[0] = low;
    }
    else {
        cout << "[-1, -1]" << endl;
        return 0;
    }

    // Find last occurrence
    while (low1 <= high1) {

        int mid = (low1 + high1) / 2;

        if (arr[mid] == target) {
            low1 = mid + 1;
        }
        else if (arr[mid] > target) {
            high1 = mid - 1;
        }
        else {
            low1 = mid + 1;
        }
    }

    if (high1 >= 0 && arr[high1] == target) {
        ans[1] = high1;
    }

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}