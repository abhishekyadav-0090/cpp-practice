#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s = "testsample";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    int count = 0;
    int maxcount = 0;
    for(int i = 0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            count++;
            if(maxcount<count){
                maxcount =count;
            }
        }
        else{
            count = 0;
        }
    }
    cout<<maxcount+1<<endl;
}