#include<iostream>
using namespace std;
class Complex
{
public:
    float real;
    float imaginary;
    Complex(){

    }
    Complex(float r,float imag)
    {
        real = r;
        imaginary = imag;
    }
    void add(Complex c)
    {
        real = real+c.real;
        imaginary = imaginary+c.imaginary;
    }
    void sub(Complex c)
    {
        real = real-c.real;
        imaginary = imaginary-c.imaginary;
    }
    void mul(Complex c)
    {
        real = real*c.real - imaginary*c.imaginary;
        imaginary = real*c.imaginary+imaginary*c.real;
    }
    void print()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};


int main()
{
    Complex c1(4,6);
    Complex c2(5,7);
    //c1.add(c2);
    c1.mul(c2);
    c1.print();
}