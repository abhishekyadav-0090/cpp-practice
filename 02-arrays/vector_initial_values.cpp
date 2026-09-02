#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(7,0070);//index 0 to 4
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}

//it will throw error when the default vlaue will be set to 0090 as this starts will 0 so it understands it as octal form.
//to print 0090 we will have to follow folllowing codes
// #include<iostream>
// #include<vector>
// #include<iomanip>
// using namespace std;
// int main(){
//     vector<int> arr(5,90);//index 0 to 4
//     for(int i = 0;i<5;i++){
//         cout<<setw(4)<<setfill('0')<<arr[i]<<" ";
//     }

// }


