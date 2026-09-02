#include<iostream>
using namespace std;
void change(int x[]){
    x[0] = 20;
    x[1] = 2;
}
int main(){
    int x[] = {6,1,2};
    change(x);// here the address has been passed.
    cout<<x[0]<<endl;
    cout<<x[1]<<endl;
    cout<<x[2]<<endl;
}