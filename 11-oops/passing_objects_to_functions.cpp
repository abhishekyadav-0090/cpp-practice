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
    void print()
    {
        cout<<name<<" "<<roll<<" "<<cgpa<<endl;
    }
};

void changebyvalue(Student s)
{
    s.name = "YAdav";
}

void changebyreference(Student &s)
{
    s.name = "Abhishek";
}

void changebyptr(Student *s)
{
    s->name = "OM"; // this lines mean (*s).name
}

int main(){
    Student x("Ak",8.7,90);
    x.print();
    changebyvalue(x);
    x.print();
    changebyreference(x);//Pass by reference allows the function parameter to refer directly to the original variable, without explicitly passing its address.
    x.print();
    changebyptr(&x);
    x.print();

}