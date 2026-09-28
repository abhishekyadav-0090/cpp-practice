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
    void print()
    {
        cout<<name<<" "<<runs<<" "<<avg<<endl;
    }
};
int main(){
   Cricketer c1("Virat Kohli",14000,58.1);
   Cricketer c2 = {"Sachin",18000,46.7};
   Cricketer c3 ("Rohit Sharma",11000,49.4);
   Cricketer* p = new Cricketer("ABD",10000,55.2); // ek naya data set h jiska naam nhi but uska address pointer p mein stored ,jisse humlog jo chahe krwa skte h
   Cricketer* ptr = &c1;
   cout<<(*ptr).name<<endl;// (*ptr).name this means the same as ptr->name
   cout<<ptr->runs<<endl;
   cout<<(*ptr).avg<<endl;
   (*ptr).avg = 74.1;
   cout<<c1.avg<<endl;
   cout<<(*ptr).avg<<endl;
   cout<<p->name<<endl;
   cout<<p->avg<<endl;
   cout<<p->runs<<endl;
   (*p).runs = 9999;
   cout<<p->runs<<endl;
   p->print();
}

//Cricketer* p = new Cricketer("ABD",10000,55.2); 
//new creates a new Cricketer object dynamically in heap memory. 
//The object doesn't have a normal variable name; its address is stored in pointer p, 
//so we can access the object through p.