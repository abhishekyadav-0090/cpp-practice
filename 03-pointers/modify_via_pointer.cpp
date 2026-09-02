// it is called pass by pointer
#include<iostream>
using namespace std;
void change(int* ptr){
    int n ;
    cin>>n;
    *ptr = n;
}
int main(){
int x = 20;
change(&x);
cout<<x<<endl;
}