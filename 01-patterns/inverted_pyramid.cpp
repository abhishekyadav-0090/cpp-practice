#include<iostream>
using namespace std;

int main(){
    int r,c;
    for(int i = 5;i>=1;i--){
        for(int j = 4;j>i-1;j--){
            cout<<" ";
        }

        for(int k = 1;k<=(2*i)-1;k++){
            cout<<"*";
        }
    
    cout<<endl;
    }


    return 0;
}
