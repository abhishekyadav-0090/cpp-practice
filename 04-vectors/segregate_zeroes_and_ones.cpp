// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>arr = {1,1,0,1,0,1,0,0};
//     int ZeroCount = 0;
//     int OneCount =0;
    
//     for(int i = 0 ; i<arr.size();i++){
//         if (arr[i] == 0){
//             ZeroCount++;}
//         else{
//             OneCount++;
//         }
//         }
//     cout<<"ZeroCount: "<<ZeroCount<<endl;
//     cout<<"OneCount: "<<OneCount<<endl;
//     int index = 0;
//     for(int i=0;i<ZeroCount;i++){
//         arr[index++] = 0;
//     } 
//     for(int i=0;i<OneCount;i++){
//         arr[index++] = 1;
//     }    
//     for(int i = 0 ; i<arr.size();i++){
//         cout<<arr[i];
//     }
        
//     }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>arr = {1,1,0,1,0,1,0,0};
//     vector<int*> v; 
//     int index = 0;
    
//     for(int i = 0;i<arr.size();i++){
//         if (arr[i] == 0)
//         {
//             v.push_back(&arr[i]);
//         }
//     }
//     for(int i = 0;i<arr.size();i++){
//         if (arr[i] == 1)
//         {
//             v.push_back(&arr[i]);
//         }
//     }
//     for(int i = 0;i<v.size();i++){
//         cout<<*v[i];
//     }
// }



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr = {1,0,1,0,1,0,0};


    for(int i = 0; i<arr.size();i++){
        for(int j = arr.size()-1;j>i;j--){
            if (arr[i] == 1 && arr[j] == 0){
                swap(arr[i],arr[j]);
            }
        }
        
    }
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i];
    }
}