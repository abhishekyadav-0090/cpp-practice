#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> a = {{2, 4, 5}, {4, 5, 1}};
    vector<vector<int>> b = {{3, 4}, {7, 5}, {1, 2}};

    int m = a.size();
    int n = b[0].size();
    int common = a[0].size();

    vector<vector<int>> res(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < common; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}