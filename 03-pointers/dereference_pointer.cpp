#include<iostream>
using namespace std;
int main(){

int x = 7;
int* p1 = &x;
*p1 = 15;
cout<<x<<endl;
}