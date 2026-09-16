#include <iostream>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;  // nobody seen yet

    int left = 0, best = 0;

    for (int right = 0; right < (int)s.size(); right++) {
        char c = s[right];
        // duplicate INSIDE the window? jump tail past the old copy
        if (last[c] >= left) {
            left = last[c] + 1;
        }
        last[c] = right;                     // remember where we saw it
        best = max(best, right - left + 1);  // window length
    }
    return best;
}

int main() {
    cout << lengthOfLongestSubstring("abcba") << endl;  // 3
    cout << lengthOfLongestSubstring("abba")   << endl;  // 2
    cout << lengthOfLongestSubstring("aa")    << endl;  // 1
}
