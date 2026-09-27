#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name,int runs,float avg)
    {
        this->name = name;
        (*this).runs = runs;
        this->avg = avg;
    }
    Cricketer(){
        
    }
};
int main(){
   Cricketer c1("Virat Kohli",14000,58.1);
   Cricketer c2 = {"Sachin",18000,46.7};
   Cricketer c3 ("Rohit Sharma",11000,49.4);
   Cricketer c4;
   Cricketer* ptr = &c1;
   cout<<(*ptr).name<<endl;// (*ptr).name this means the same as ptr->name
   cout<<ptr->runs<<endl;
   cout<<(*ptr).avg<<endl;
   (*ptr).avg = 74.1;
   cout<<c1.avg<<endl;
   cout<<(*ptr).avg<<endl;
}