#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int &c , int &v){
    int temp = c;
    c =v;
    v = temp;
    
}

int main(){

int a = 3,b = 5,c = 10;
swap(a,b);
cout<<a<<" "<<b<<endl;
cout<<c<<" "<<&c<<endl;

}