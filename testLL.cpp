#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
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
        cout << "memory is free for node" << value << endl;
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
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
void deleteNode(Node *&head, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *crr = head;
        Node *prev = next;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = crr;
            crr = crr->next;
            cnt++;
        }
        prev->next = crr->next;
        crr->next = NULL;
        delete crr;
    }
}
int main()
{
    Node* node1 = new node1(10);
    cout << node->data << endl;
    cout << node1->next << endl;
    Node *head = node1;
    insertAtHead(head, 12);
    print(head);
    deleteNode(head, 2);
    printf(head);
    return 0;
}