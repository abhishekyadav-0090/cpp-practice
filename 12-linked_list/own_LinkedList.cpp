#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
    Node()
    {
    }
};

class MyLinkedList
{
    Node *head;
    Node *tail;
    int len;            // encapsulation
public:

    MyLinkedList()
    {
        head = tail = NULL;
        len = 0;
    }
    void insertAtTail(int val)
    {
        Node *n = new Node(val);
        if (len == 0)
            head = tail = n;
        else
        {
            tail->next = n;
            tail = n;
        }
        len++;
    }
    void insertAtHead(int val)
    {
        Node *n = new Node(val);
        if(len == 0)
        {
            head = tail = n;
        }
        else
        {
            n->next = head;
            head = n;
        }
        len++;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void removeAtHead()
    {
        if(len == 0)
        {
            cout<<"List is empty!"<<endl;
            return;
        }
        head = head->next;
        len--;
    }
    void get()
    {

    }
    void set()
    {

    }
    int size()
    {
        return len;
    }

};

int main()
{
    MyLinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtHead(5);
    list.display();
    cout<<list.size()<<endl;
}