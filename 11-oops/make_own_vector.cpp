#include <iostream>
using namespace std;
class MyVector
{
    int length;
    int *arr;
    int cap;

public:
    MyVector(int capacity, int default_value)
    {
        cap = capacity;
        length = capacity;
        arr = new int[capacity];
        for (int i = 0; i < capacity; i++)
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
            cout<<"Array is empty!"<<endl;
            return;
        }
        length--;
    }
    void push_back(int val)
    {
        if (length == cap)
        {
            cap = 2 * cap;

            int *temp = new int[cap];

            for (int i = 0; i < length; i++)
            {
                temp[i] = arr[i];
            }

            delete[] arr;
            arr = temp;
        }

        arr[length++] = val;
    }
    int get(int idx)
    {
        if(idx<0||idx>=length)
        {
            cout<<"Index out of bound"<<endl;
            return -1;
        }
        return arr[idx];
    }
    void set(int idx,int value)
    {
        arr[idx] = value;
    }
    void print()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    MyVector v(5, -1);
    v.print();
    cout << v.size() << " " << v.capacity() << endl;
    v.pop_back();
    v.print();
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(67);
    v.print();
    cout << v.size() << " " << v.capacity() << endl;
    v.push_back(69);
    v.print();
    cout << v.size() << " " << v.capacity() << endl;

}