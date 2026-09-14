#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Abhishek";
    int count = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a' || s[i] == 'A') {
            count++;
        }
        else if(s[i] == 'e' || s[i] == 'E') {
            count++;
        }
        else if(s[i] == 'i' || s[i] == 'I') {
            count++;
        }
        else if(s[i] == 'o' || s[i] == 'O') {
            count++;
        }
        else if(s[i] == 'u' || s[i] == 'U') {
            count++;
        }
    }

    cout << count << endl;
}


// // ❌ WRONG
// x == 'a' || 'A'

// // ✅ RIGHT
// x == 'a' || x == 'A'