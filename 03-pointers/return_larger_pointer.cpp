// #include<iostream>
// using namespace std;
// int main(){
// int a;
// a= 10;
// int* p = &a;
// int** q = &p;
// cout<<a<<endl;//value of a
// cout<<&a<<endl;//&means address stored
// cout<<p<<endl;//p is ptr which simply stores the address
// cout<<*p<<endl;//gives the value of x, it means gives the value stored at the address of which is stored in pointer p
// cout<<q<<endl;//q is the pointer which is storing the address of another pointer p
// cout<<**q<<endl;//gives value of x

// }

// #include<iostream>
// using namespace std;

// void change(int* a);
// int main(){

// int x = 10;
// change(&x);
// cout<<x<<endl;

// }
// void change(int* a){

// *a = 30;

// }

//swapping two numbers now

// #include<iostream>
// using namespace std;
// void swap(int* a, int* b){
//     *a = *a+*b-(*b = *a);

// }
// int main(){
//     int a = 5, b =3;
//     cout<<a<<" "<<b<<endl;
//     swap(&a,&b);
//     cout<<a<<" "<<b<<endl;
// }

// #include<iostream>
// using namespace std;
// void increment(int* a){
//     *a += 1;
// }

// int main(){
//     int a = 10;
//     cout<<a<<endl;
//     increment(&a);
//     cout<<a<<endl;
// }
// #include<iostream>
// using namespace std;
// void multiply(int* a,int n){
//     int result=*a * n;
//     cout<<(result)<<endl;

// }
// int main(){
//     int a = 8;
//     int n ;
//     cin>>n;
//     multiply(&a,n);
// }
#include<iostream>
using namespace std;
int* larger(int* a, int* b){
    if (*a>*b) return a;
    else return b;


}
int main(){

    int a = 30;
    int b = 25;
    int* ans = larger(&a, &b);
    cout<<*ans<<endl;
}