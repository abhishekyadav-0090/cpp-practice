// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){

//     vector<int> v = {0,1};
//     sort(v.begin(),v.end());
//     int s = v.size();
//     int total = 0;
//     for(int i = 0;i<=s;i++){
//         total = total + i;
//     }
//     //cout<<total;
//     int vsum = 0;
//     for(int i = 0; i<v.size();i++){
//         vsum = vsum + v[i];
//     }

//     int missing;
//     missing = total - vsum;
//     cout<<missing;


// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){

//     vector<int> v = {0,1,2};
//     sort(v.begin(),v.end());
//     int n = v.size();
//     bool flag = false;
//     for(int i = 0;i<n;i++){
//         if(v[i] != i){
//             cout<<i;
            
//             flag = true;
//             break;
//         }
//     }
//     if(flag == false){
//         cout<<n;    
//     }
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> v = {1,2,0};

    int n = v.size();
    for(int i = 0;i<=n;i++){
        bool flag = false;
        for(int ele : v){
            if(ele == i){
                flag = true;
                break;
            }
        }
        if(flag == false) cout<<i;
    }

}


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){

//     vector<int> v = {0,1,3};

//     vector<bool> flag(4,false);

//     for(int i = 0;i<v.size();i++){
//         flag[v[i]] = true;   
//     }
//     for(int i = 0;i<flag.size();i++){
//         if(flag[i] == false){
//             cout<<i;
//         }
//     }
//     }
    
     

