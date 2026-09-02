#include<iostream>
using namespace std;
int* smaller(int* a, int* b){
    if (*a>*b) return b;
    else return a;
}
int main(){

int a = 25;
int b = 50;
int* ans = smaller(&a,&b);
cout<<"Returned address"<<" "<<ans<<endl;
cout<<"Value stored is: "<<*ans<<endl;

}