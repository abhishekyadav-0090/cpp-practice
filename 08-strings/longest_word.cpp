#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    int i = 0;
    int j = 0;
    int n = s.length();
    int maxlen = 0;
    while(j<n){
        if(s[j] != ' '){
            j++;
        }
        else{
            int len = j-i;
            if(maxlen<len){
                maxlen = len;
            }
           i = j+1;
           j++;
        }
    }
    int len = j-i;
    if(maxlen < len){
    maxlen = len;
}
    cout<<maxlen<<endl;
}

// another short way 

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);

//     int i = 0, maxlen = 0;

//     for (int j = 0; j <= s.size(); j++) {
//         if (j == s.size() || s[j] == ' ') {
//             maxlen = max(maxlen, j - i);
//             i = j + 1;
//         }
//     }

//     cout << maxlen;
// }