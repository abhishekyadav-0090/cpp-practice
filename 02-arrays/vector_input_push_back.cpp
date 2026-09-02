// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr(7,0070);//index 0 to 4
//     for(int i = 0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     arr.push_back(5);//it is used to add the value to the end of dynamic container.
//     arr.pop_back();
//     for(int i = 0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }

//one use of push_back


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n,x;
    cout<<"Enter the number of elements";
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }

    cout<<"Elements are:";
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


}
