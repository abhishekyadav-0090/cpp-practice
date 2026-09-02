#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n = 4;
    vector<vector<int>> a(n,vector<int>(n,0));
    int k = 1;
    int m = a.size(),p = a[0].size();
    int minr = 0,maxr = m-1;
    int minc = 0,maxc = p-1;

    while(minr<=maxr && minc<=maxc){
         
        for(int j = minc;j<=maxc;j++){
            a[minr][j] = k;
            k++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int i = minr;i<=maxr;i++){
            a[i][maxc] = k;
            k++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int j = maxc;j>=minc;j--){
            a[maxr][j] = k;
            k++;
        }
        maxr--;
        
        for(int i = maxr;i>=minr;i--){
            a[i][minc] = k;
            k++;
        }
        minc++;
    }

for(int i = 0;i<a.size();i++){
   
   for(int j = 0;j<a[0].size();j++){
    cout<<a[i][j]<<" ";
   }
   cout<<endl;
}

}