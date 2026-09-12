#include<iostream>
using namespace std;
int main(){

int x = 7;
int* p1 = &x;
int* p2 = &x;
cout<<&x<<endl;
cout<<p1<<" "<<p2<<endl;
cout<<&p1<<" "<<&p2<<endl;
cout<<*p1<<" "<<*p2<<endl;

}