#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
    }
    Node()
    {

    }
};
int main()
{
    Node a;
    a.val = 7;
    Node b;
    b.val = 0;
    Node c(1);
    Node d(8);
    Node e(2);

    a.next= &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    cout<<(b.val)<<endl;
    cout << a.next->val << endl;
}
