#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node *&head)
{
    // print linked list
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteNode(int pos, Node *&head)
{

    // deleting first node or start node
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        // mermory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting middle node or last node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *node1 = new Node(10); // call constructor
    cout << node1->data << endl;
    cout << node1->next << endl;
    Node *head = node1;
    // Node *tail = node1;
    // print(head);
    insertAtHead(head, 12);
    print(head);
    deleteNode(2, head);
    print(head);
    return 0;
}