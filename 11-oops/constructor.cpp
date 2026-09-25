#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    float cgpa;
    Student(string n,float c,int r)//Parameterised Constructor
    {
        name = n;
        roll = r;
        cgpa = c;
    }
    Student()
    {

    }
};
int main(){
    Student x("Ak",8.7,90);
    Student y("Sk",8.9,9);
    Student z;
    z.name = "OM";
    z.roll = 34;
    z.cgpa = 8.7;
    cout<<x.name<<" "<<x.cgpa<<" "<<x.roll<<endl;
    cout<<y.name<<" "<<y.roll<<" "<<y.cgpa<<endl;
    cout<<z.name<<" "<<z.roll<<" "<<z.cgpa<<endl;
}