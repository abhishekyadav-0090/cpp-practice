#include<iostream>
using namespace std;
int main(){
    for (int row = 1;row<=5;row++){
        for(int col = 1; col <= 5 - row ; col++){
        cout<<" ";
        }
        for(int x = 1;x<=(2*row)-1;x++){
            cout<<"*";
        } 
        
        cout<<endl;
    }

    return 0;
}
