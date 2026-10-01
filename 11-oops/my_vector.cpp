#include<iostream>
using namespace std;
class MyVector{
int length;
int cap;
int* arr;
public:
    MyVector(int capacity,int default_value)
    {
        length = capacity;
        cap = capacity;
        arr = new int[capacity];
        for(int i = 0;i<capacity;i++)
        {
            arr[i] = default_value;
        }
    }
    int size()
    {
        return length;
    }
    int capacity()
    {
        return cap;
    }
    void pop_back()
    {
        if(length == 0)
        {
            cout<<"Empty"<<endl;
            return;
        }
        length--;
    }
    void push_back(int val)
    {
        if(length == cap)
        {
            cap = cap*2;
            int* temp = new int[cap];
            for(int i = 0;i<length;i++)
            {
                temp[i] = arr[i];
            }
            delete arr;
            arr = temp;

        }
        arr[length++] = val;
    }
    void print()
    {
        for(int i = 0;i<length;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    MyVector v(5,-1);
    
    v.print();
}
