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
// this code is very good example of a function returning a pointer.
// here when the function larger has a return type of int*, which means it returns a pointer to an int . 
// as now it has given the address in the a and b form this will now get stoed at int* ans = suppose add is 1000.
// now *ans is in last line asking to print the value stored at that address.

// main()
// a = 30
// b = 25
// &a = 1000 suppose address and &b = 2000
// larger(1000,2000)  function larger mein dono address receive honge
// *a = 30
// *b = 25
// 30>25
// return a 
// joki return karega address a ka 1000 , aise be larger function ke aage int* toh address
// ans = 1000
// yahan ans bhi ek pointer jo address ko receive karega
// phir uske baad usko deference karenge
// aur phir print hoga