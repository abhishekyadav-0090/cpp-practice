// #include<iostream>
// using namespace std;

// void countDigits(int n,int* c){

//     int count = (n==0)? 1:0;
//     while(n != 0){
//         count++;
//         n /= 10;
//     }
//     *c = count;

// }

// int main(){

// int n;
// cin>>n;
// int c = 0;
// countDigits(n,&c);
// cout<<c<<endl;

// }  


#include<iostream>
using namespace std;
void countDigits(int n, int* c){
    int count = (n==0)?1:0;
    while (n!=0){
        count++;
    }
        *c = count;
    
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int c = 0;
    countDigits(n,&c);
    cout<<c<<endl;
}