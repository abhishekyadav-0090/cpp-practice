#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here.*/ 
      int n;
      cin>>n;
      int matrix[n][n];
      for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>matrix[i][j];
        }
      }
      for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
      }
    
    int d = 0;
    int nd = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if (i == j){
                d = matrix[i][j] + d;
            }
            if(i+j == n - 1){
                nd = matrix[i][j] + nd;
            }
        }
    }
    
    if (n%2 != 0){
        cout<<"sum"<<d+nd - n;
        cout<<endl;
    } 
    else{
        cout<<n+nd;
    }

    
      
    
}