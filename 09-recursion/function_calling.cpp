#include<iostream>
using namespace std;

void aky();
void om();
void abhi();

void aky(){
    cout<<"AKY"<<endl;
    om();
}
void om(){
    cout<<"OM"<<endl;
    abhi();
}
void abhi(){
    cout<<"ABHI"<<endl;
}
int main(){
    aky();
    om();
    abhi();
}