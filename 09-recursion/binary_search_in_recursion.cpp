#include <iostream>
#include <vector>
using namespace std;
int binary(int low, int high, int target, vector<int> &arr)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] > target)
        return binary(low, mid - 1, target, arr);
    else if (arr[mid] < target)
        return binary(mid + 1, high, target, arr);
    else
        return mid;
}

int main()
{
    vector<int> arr = {2, 3, 5, 6, 7, 8};
    int n = arr.size();
    int target = 7;
    cout << binary(0, n - 1, target, arr);
}