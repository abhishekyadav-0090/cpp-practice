#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<pair<int,int>> topKFrequent(vector<int>& arr, int k) {

        sort(arr.begin(), arr.end());

        int count = 1;
        int n = arr.size();

        vector<pair<int,int>> v;

        for(int i = 1; i < n; i++)
        {
            if(arr[i] == arr[i-1])
            {
                count++;
            }
            else
            {
                v.push_back({count, arr[i-1]});
                count = 1;
            }
        }

        // Last element
        v.push_back({count, arr[n-1]});

        return v;
    }

    void display(vector<pair<int,int>>& v)
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout << "Count: " << v[i].first
                 << " Value: " << v[i].second << endl;
        }
    }
    void cnt(vector<pair<int,int>>& v)
    {
        for(int i = 0;i<v.size();i++)
        {
                    
        }
    }
};

int main()
{
    Solution s;

    vector<int> arr = {1,2,2,2,3,3,3,4};
    int k = 2;

    vector<pair<int,int>> v = s.topKFrequent(arr, k);

    s.display(v);
    s.cnt(v);
}