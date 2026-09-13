#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

int x = 10;
for(int i = 1;i<=x;i++){
    if(i==x/i){
        cout<<i;
        break;
    }
    if(i>x/i){
        cout<<i-1;
        break;
    }
}

}