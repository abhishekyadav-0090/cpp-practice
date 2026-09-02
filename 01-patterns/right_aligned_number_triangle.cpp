#include<iostream>
using namespace std;
int main(){
    for (int row = 1;row<=5;row++){
        for(int col = 1; col <= 5 - row ; col++){
        cout<<" ";
        }
        for (int j = 1;j<=row;j++){
            cout<<row;
        }
        cout<<endl;
    }

    return 0;
}
