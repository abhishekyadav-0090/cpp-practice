#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <cstdlib>
using namespace std;
int main(){
                                                                          
vector<int>a = {10,15,30,28};
vector<int>b ;
int min = INT_MIN;

for(int i = 0;i<=size(a)-2;i++){
    min = abs(a[i]-a[i+1]);
    // if(min>maxMin){
    //     maxMin = min;
    //     cout<<maxMin<<endl;
    // }
    b.push_back(min);

}
int maxMin = b[0];

for(int i = 0;i<b.size();i++){
    if(maxMin>b[i]){
        maxMin = b[i];
    }
}
cout<<maxMin<<endl;

}