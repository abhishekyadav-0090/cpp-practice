#include<iostream>
using namespace std;
class Fraction
{
public:
    float x;
    float y;
    Fraction(float x, float y)
    {
        this->x = x;
        this->y = y;
        simplify();
    }
    Fraction()
    {

    }
    void print(){
        cout<<x<<"/"<<y;
    }
    
    void add (Fraction f)
    {
        x = x*f.y+ y*f.x;
        y = y*f.y;
        simplify();
    }

    void simplify(){
        int hcf = gcd(x,y);
        x /= hcf;
        y /= hcf;
    }
    int gcd(int a,int b){
        if(a==0) return b;
        return gcd(b%a,a);
    }
};
Fraction multiply (Fraction f1,Fraction f2)
{
    Fraction res;
    res.x = f1.x*f2.x;
    res.y = f1.y*f2.y;
    return res;
}

int main()
{
    Fraction f1(2,5);
    Fraction f2(3,5);
    Fraction ans = multiply(f1,f2);
    ans.print();
    cout<<endl;
    f1.add(f2);
    f1.print();
}