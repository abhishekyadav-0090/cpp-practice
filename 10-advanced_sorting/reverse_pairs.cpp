#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    int count;

    void merge(vector<int> &a,vector<int> &b,vector<int> &c)
    {
        int i = 0,j = 0,k = 0;
        while(i<a.size() and j < b.size())
        {
            if(a[i]>b[j])
            {
                c[k++] = b[j++];
                //count += a.size() - i;
            }
            else
            {
                c[k++] = a[i++];
               
            }
        }
        while(i<a.size())
        {
            c[k++] = a[i++];
        }
        while(j<b.size())
        {
            c[k++] = b[j++];
        }
    }

    int inversion(vector<int>& a,vector<int>& b)
    {
        int cnt = 0;
        int i = 0,j = 0;
        int m = a.size();
        while(i<a.size() and j<b.size())
        {
            if((long long)a[i]>2*(long long)b[j])
            {
                cnt+=(m-i);
                j++;
            }
            else i++;
        }
        return cnt;
    }


    void mergesort(vector<int> &arr)
    {
        int n = arr.size();
        if(n == 1) return;
        vector<int> a;
        vector<int> b;
        for(int i = 0;i<n/2;i++)
        {
            a.push_back(arr[i]);
        }
        for(int j = n/2;j<arr.size();j++)
        {
            b.push_back(arr[j]);
        }
        mergesort(a);
        mergesort(b);
        count += inversion(a,b);
        merge(a,b,arr);
    }


    int reversePairs(vector<int>& arr) {
        count = 0;
        mergesort(arr);
        return count;
    }
};

int main()
{
    Solution s;

    vector<int> arr = {1, 3, 2, 3, 4};

    cout << s.reversePairs(arr) << endl;

    return 0;
}