#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
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
void insertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
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
void insertAtPos(Node *&head, int pos, int d)
{
    // insert at start

    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }
    // if(len==pos-1){
    //     insertAtHead (head,d);
    //     return;
    // }
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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
    Node *tail = node1;
    print(head);
    insertAtHead(head, 12);
    insertAtTail(tail, 13);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtPos(head, 3, 96);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    deleteNode(5, head);
    print(head);
    return 0;
}