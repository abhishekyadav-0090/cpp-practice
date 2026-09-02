// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// // {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     vector<vector<int>> a ={{1,2},{3,4},{5,6},{7,8}};
//     vector<int> ans;
//     int top = 0;
//     int bottom = a.size() - 1;
//     int left = 0;
//     int right = a[0].size() - 1;

//     while(top<=bottom&&left<=right){
//     for(int i = left;i<=right;i++){
//         cout<<a[top][i]<<" ";
//     }
//     top++;
//     for(int i = top;i<=bottom;i++){
//         cout<<a[i][right]<<" ";
//     }
//     right--;
//     if(bottom>=top){
//         for(int j = right;j>=left;j--){
//         cout<<a[bottom][j]<<" ";
//     }
//     }
//     bottom--;
//     if(left<=right){
//         for(int k = bottom;k>= top ;k--){
//         cout<<a[k][left]<<" ";
//     }
//     left++;
//     }
//     }
// }


#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<vector<int>> a ={{1,2},{3,4},{5,6},{7,8}};
    vector<int> ans;
    int m = a.size(),n = a[0].size();
    int minr = 0,maxr = m-1;
    int minc = 0,maxc = n-1;
    while(minr<=maxr && minc<=maxc){
        for(int j = minc;j<=maxc;j++){
            ans.push_back(a[minr][j]);
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i = minr;i<=maxr;i++){
            ans.push_back(a[i][maxc]);
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int j = maxc;j>=minc;j--){
            ans.push_back(a[maxr][j]);
        }
        maxr--;
        
        for(int i = maxr;i>=minr;i--){
            ans.push_back(a[i][minc]);
        }
        minc++;
    }

for(int i = 0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

}