#include <iostream>
using namespace std;
double myPow(double a, int b){
    if(b == 0) return 1;
    if(b==INT_MIN){
        return myPow(a*a,b/2);
    }
    if(b<0){
        return 1/myPow(a,-b);
    }
    double ans = myPow(a,b/2);
    if(b%2==0){
        return ans* ans;
    }
    else{
        return a*ans*ans;
    }
}
int main(){
    double a;
    int b;
    cin>>a>>b;
    cout<<myPow(a,b)<<endl;
} 