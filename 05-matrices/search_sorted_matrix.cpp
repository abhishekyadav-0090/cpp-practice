// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){


//     vector<vector<int>> a ={{2,4,5},{4,5,1}};
//     int m = a.size();
//     int n = a[0].size();
//     int target = 5;
//     bool s = false;
//     for(int i = 0;i<m;i++){
//         for(int j = 0;j<n;j++){
//             if(a[i][j] == target){
//                 s = true;
//                 break;
//             }
//         }
//     }
//     if(s == true){
//         cout<<"Element Found:";
//     }
//     else{
//         cout<<"Not Found:";
//     }


// }



#include<iostream>
#include<vector>
using namespace std;
int main(){


    vector<vector<int>> a ={{2,4,5},{4,5,1},{3,5,1}};
    int target = 51;
    int m = a.size();
    int n = a[0].size();
    int i = 0;
    int j = n-1;
    while(i<m && j>=0){
        if(a[i][j] == target){
            cout<< "found"<<endl;
            break;
        } 
        else if(a[i][j] < target ) {
        j--;}
        else{i++;} 
    }    

}