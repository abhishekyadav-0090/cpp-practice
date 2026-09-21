#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets(vector<int> &arr)
{
    vector<vector<int>> result;
    result.push_back({});
    for (int num : arr)
    {
        int size = result.size();
        for (int j = 0; j < size; j++)
        {
            vector<int> ans = result[j];
            ans.push_back(num);
            result.push_back(ans);
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result = subsets(arr);

    for (vector<int> v : result)
    {
        cout << "{ ";

        for (int x : v)
        {
            cout << x << " ";
        }

        cout << "}" << endl;
    }
}