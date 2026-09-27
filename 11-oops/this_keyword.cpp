#include<iostream>
using namespace std;
class Doraemon{
public:
    string name;
    string type;
    int hp;
    Doraemon(string n,string t,int hp)// when we have to use the same names in arguments as well as in declarations then use this leyword
    {
        this->name = name;
        this->type = type;
        hp = hp;
    }
    void print()
    {
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }
};
int main()
{
    Doraemon d1 = {"Nobita", "Human", 40};
    Doraemon d2("Shizuka","Human",50);
    d1.print();
    d2.print();
}