#include<iostream>
#include<vector>
using namespace std;
int main(){
//     int m = 5;
//     vector<vector<int>> v(m);
//     for(int i = 0;i<v.size();i++){
//         for(int j = 0;j<=i;j++){
//             if(j == 0 || j == i){
//                 v[i].push_back(1);
//             }
//             else{
//                 v[i].push_back(v[i-1][j-1]+v[i-1][j]);
                
//             }
//         }
//     }
//     for(int i = 0;i<v.size();i++){
//         for(int j = 0;j<v[i].size();j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

int m = 5;
    vector<vector<int>> ans;
    for(int i = 1;i<=m;i++){
        ans.push_back(vector<int>(i,1));
    }
    for(int i =0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            if(j!= 0 && j!=i){
                ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
            }
        }
    }

for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}
