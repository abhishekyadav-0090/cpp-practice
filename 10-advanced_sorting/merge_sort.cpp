#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}
void mergesort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
    }

}
void merge(vector<int> &a, vector<int> &b, vector<int> &c)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < a.size())
        c[k++] = a[i++];
    while (j < b.size())
        c[k++] = b[j++];
}
int main(){
    vector<int> arr = {5,2,4,3,1,6,7,8};
    int n = arr.size();
    vector<int> a;
    vector<int> b;
    vector<int> c(n);
    for(int i = 0;i<n/2;i++){
        a.push_back(arr[i]);
    }
    for(int j = n/2;j<arr.size();j++){
        b.push_back(arr[j]);
    }
    print(a);
    cout<<endl;
    //print(b);
    mergesort(a);
    mergesort(b);
    //print(a);
    merge(a,b,c);
    print(c);
    
}