//This Program is for Singly Linked List for insertion And Deletion of nodes
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // node creation
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;

        // free the memory
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory free is " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d); // creating memory dynamically
    temp->next = head;        // linking 12 and 10
    head = temp;              // updating the head
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(Node *&tail, Node *&head, int position, int d)
{
    // insert at head
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    // finding postion where to insert
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // insert at last
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // create a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(Node *&head, int position)
{
    // delete first Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // free the start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting from middle and last
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {                              // this loop will run until temp =null
        cout << temp->data << " "; // printing value of temp
        temp = temp->next;         // this is taking temp to the next node
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtMiddle(tail, head, 3, 45);
    print(head);
    insertAtMiddle(tail, head, 4, 70);
    print(head);
    insertAtTail(tail, 56);
    print(head);
    insertAtHead(head, 1);
    print(head);
    deleteNode(head, 1);
    print(head);

    cout << "head is " << head->data << endl;
    cout << "tail is " << tail->data << endl;

    return 0;
}