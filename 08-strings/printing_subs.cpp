#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


long long maxSumK(vector<int>& a, int k) {
    long long sum = 0;
    for (int i = 0; i < k; i++) sum += a[i];   // first window
    long long best = sum;
    for (int i = k; i < (int)a.size(); i++) {
        sum += a[i];          // new element enters
        sum -= a[i - k];      // old element leaves
        best = max(best, sum);
    }
    return best;
}





int main(){
    string s = "abcd";
    for(int i = 0;i<s.size();i++){
        for(int j = i;j<s.size();j++){
            cout<<s.substr(i,j-i+1)<<" ";
        }
    }
    // vector<int> a = {5,4,3,2,1};
    // int k = 3;
    // cout<<maxSumK(a,k);
}