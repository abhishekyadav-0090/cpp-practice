// #include<iostream>
// using namespace std;
// int n;
// void print(int x){
//     if(x>n)return;
//     cout<<x<<" ";
//     print(x+1);
    
// }
// int main(){
//     cin>>n;
//     print(1);
// }

//another way is simply interchanging the line in back_counting

#include<iostream>
using namespace std;

void print(int n){
    if(n == 0) return;
    cout<<n<<" ";
    print(n-1);
    cout<<n<<" ";
}
int main(){
    print(4);
}