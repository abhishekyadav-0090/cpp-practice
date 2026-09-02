#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> v){
    v[2] = 99;
}

int main(){
    vector<int> v ={3,4,5,43,3,3};
    change(v);
    cout<<v[2]<<endl;
}

//vectors are passed by value so to get the desired result we have to put & in the function the value will get change.

#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &v){
    v[2] = 99;
}

int main(){
    vector<int> v ={3,4,5,43,3,3};
    change(v);
    cout<<v[2]<<endl;
}