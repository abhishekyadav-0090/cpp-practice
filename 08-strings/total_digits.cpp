#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

int n ;
cout<<"Enter the number";
cin>>n;
string s = "";
bool negative = false;
if(n<0){
        n = -(n);
        negative = true;
    }
if (n == 0) {
        s.push_back('0');
    }
while(n!=0){
    int lastdigit = n%10;
    char ch = lastdigit + '0';
    s.push_back(ch);
    n/=10;
}
int i = 0;
int j = s.size()-1;
while(i<j){
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i++;
    j--;
}
if (negative) {
        s.insert(0, "-");
    }
cout<<s.length()<<endl;
cout<<s<<endl;
}