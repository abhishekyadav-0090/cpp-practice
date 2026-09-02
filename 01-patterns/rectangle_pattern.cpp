#include<iostream>

using namespace std;

int main()
{
    int row,col;
    
    for (row = 1;row<=5;row++){
        for(col = 1;col<=6;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
