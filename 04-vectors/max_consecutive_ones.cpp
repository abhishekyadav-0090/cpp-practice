#include<iostream>
using namespace std;
int main(){

int a[] = {1,1,0,1,0};

int count ;
cout<<"Enter the number"<<endl;
cin>>count;
int maxCount = 0;
for(int i = 0;i<sizeof(a)-1;i++){
    if(a[i] == 1){
        count++;
        if(maxCount<count){
            maxCount = count;
        }
    }

    else{
        count = 0;
    }
}
cout<<maxCount;

}