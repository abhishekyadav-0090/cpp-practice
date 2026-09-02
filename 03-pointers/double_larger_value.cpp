#include<iostream>
using namespace std;
void doubleLarger(int* a, int* b){
    if (*a>*b) {
        *a *= 2;
    }
    else{
        *b *= 2;
    }
}
int main(){
    int a = 20;
    int b =30;
    cout<<a<<" "<<b<<endl;
    doubleLarger(&a,&b);
    cout<<a<<" "<<b<<endl;
    
}