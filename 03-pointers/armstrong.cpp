#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 1634;
    int original = n;

    int digits = 0;
    int temp = n;

    // Count digits
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;

    // Calculate Armstrong sum
    while(temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if(sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";
}