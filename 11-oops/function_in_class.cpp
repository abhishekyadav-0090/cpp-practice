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
    void print()
    {
        cout<<name<<" "<<color<<" "<<power<<" "<<mileage<<" "<<isE20<<" "<<seats<<endl;
    }
};
int main()
{
    Car c1;
    c1.color ="Black";
    c1.mileage = 15.55;
    c1.name = "Breeza";
    Car c2 = {"Toyata","Black",34,4.2,true,5};
    c1.print();
    c2.print();
}