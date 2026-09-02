#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    
    vector<int> v = {1,3};
    for(int i =1;i<v.size();i++){
        if(v[v.size()-i] != 9){
            v[v.size()-i]++;
            break;
        }
        else if(v[v.size()-i] == 9){
            v[v.size()-i] = 0;
            //  v[v.size()-(i+1)]++;
            //  break;
        }
        
       
                
    }
for(int ele : v){cout<<ele<<" ";}
}