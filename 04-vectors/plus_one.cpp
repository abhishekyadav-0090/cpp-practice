#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {9,9};

    for(int i = v.size() - 1; i >= 0; i--) {

        if(v[i] != 9) {
            v[i]++;
            break;
        }

        v[i] = 0;

        if(i == 0) {
            v.insert(v.begin(), 1);
        }
    }

    for(int ele : v) {
        cout << ele << " ";
    }
}