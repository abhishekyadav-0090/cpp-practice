#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = {10,12,13,24,25,36};
    sort(arr.begin(),arr.end());
    int limit = 50;
    int boat = 0;
    int i = 0;
    int j = arr.size()-1;
    while(i<j){
        if(arr[i]+arr[j]>limit){
            j--;
            boat++;
        }
        else if(arr[i]+arr[j]<=limit){
            i++;
            boat++;
            j--;
        }
        
    }
    cout<<boat<<endl;
    

}
