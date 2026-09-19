#include<iostream>
using namespace std;

void aky(int n){
    if(n==0) return;
    cout<<"YADAV"<<endl;
    aky(n-1);
}

int main(){
    aky(3);
}