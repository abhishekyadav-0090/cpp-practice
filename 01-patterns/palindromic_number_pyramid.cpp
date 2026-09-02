#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    for (int row = 1;row<=5;row++){
        for(int col = 1; col <= 5 - row ; col++){
        cout<<" ";
        }
        for(int x = 1;x<=row;x++){
            cout<<x;
        } 
        for(int y = row-1;y>=1;y--){
            cout<<y;
        }
        cout<<endl;
    }

    return 0;
}
