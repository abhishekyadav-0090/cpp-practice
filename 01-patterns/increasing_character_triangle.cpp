// #include<iostream>
// using namespace std;
// int main(){
//     for (int row = 1;row<=5;row++){
//         for(int col = 1; col <= row ; col++){
//         cout<<col<<" ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    for (int row = 1;row<=5;row++){
        char name = 'a' + row - 1;
        for(int col = 1; col <= row ; col++){
        cout<<name<<" ";
        }
        cout<<endl;
    }

    return 0;
}