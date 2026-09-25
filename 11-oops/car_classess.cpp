#include<iostream>
using namespace std;
class Car
{
public:
    string name;
    string color;
    int power;
    float mileage;
    bool isE20;
    int seats;
};
int main()
{
    Car c1;
    c1.color ="Black";
    c1.mileage = 15.55;
    c1.name = "Breeza";
    Car c2 = {"Toyata","Black",34,4.2,true,5};

    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<c2.seats<<endl;
}