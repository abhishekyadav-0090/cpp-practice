#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 7};
    int target = 3;

    auto it = upper_bound(arr.begin(), arr.end(), target);

    if (it == arr.end())
        cout << -1;        // no element strictly greater than target
    else
        cout << *it;       // smallest value > target
}
// lowerbound aur upperbound mein = ka fark h.
//upperbound strictly greater than the target.