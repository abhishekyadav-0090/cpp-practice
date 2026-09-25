#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    float cgpa;
};
int main ()
{
    Student x;
    x.name = "Abhishek";
    x.roll = 9;
    x.cgpa = 9.5;

    cout<<x.name<<endl;
    cout<<x.roll<<endl;
}