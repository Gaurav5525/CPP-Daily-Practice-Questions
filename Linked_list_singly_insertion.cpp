//This Program is for Singly Linked List for insertion of nodes
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
};

// function 1
// function to enter element at head/first position
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d); // creating memory dynamically
    temp->next = head;        // linking 12 and 10
    head = temp;              // updating the head
}

// function 2
// function to enter element at tail/last position
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// function 3
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
    temp->next = nodeToInsert;
    nodeToInsert->next = temp->next;
}

// function 4
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

// function 5
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtMiddle(tail, head, 2, 45);
    print(head);

    cout << "head is " << head->data << endl;
    cout << "tail is " << tail->data << endl;
    return 0;
}