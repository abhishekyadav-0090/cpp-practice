#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // 1. Spaces for the pyramid look
        for (int s = 0; s < rows - i - 1; s++) {
            cout << " ";
        }

        // 2. Each row always starts with 1
        int num = 1;

        for (int j = 0; j <= i; j++) {
            cout << num << " ";

            // Calculate the next number in the same row
            num = num * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}