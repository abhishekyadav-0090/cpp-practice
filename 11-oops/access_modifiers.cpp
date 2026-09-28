#include<iostream>
using namespace std;
class Cricketer{
private:
    int runs;
public:
    string name;
    //int runs;
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
    int getRuns()//getter
    {
        return runs;
    }
    void setRuns(int runs)//setter
    {
        this->runs = runs;
    }
};
int main(){
    Cricketer* c = new Cricketer("Virat Kohli",14500,58.1);
    cout<<(*c).name<<endl;
    //cout<<(*c).runs<<endl;// this is giving error as it can be accessed publicly.
    cout<<(*c).avg<<endl;
    //(*c).print();//private entities can be accessed only under class.
    cout<<c->getRuns()<<endl;//getter method
    c->setRuns(15000);
    cout<<c->getRuns()<<endl;
}

