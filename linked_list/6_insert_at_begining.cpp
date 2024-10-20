#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *insert_begin(Node *head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
    return head;
}
void printlist_recursive(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    else
    {
        cout << temp->data << " ";
        printlist_recursive(temp->next);
    }
}
int main()
{

    Node *head = new Node(2); // here we create our first linked list with value 2

    /*

    here lets say the address of the node is 1000 so the node is created, now the node which is created will pass the head to its fucntion , the function will take the node put the value in the new node created as temp, this new node is the node which will be actully added to the begining, now when the temp is created the passed value is  assgined to the constructor so the node is seperately created now,

    now assigning the address inside the head to the next part of temp and then assigning the head the temp head being the pointer itself will store the address of the temp inside it so now the head is pointing to temp and temp is pointing to the node which was created earlier.

    the next part is to return the latest head pointer back to the function call which is called by the head pointer now the head pointer in the main fucntion will store the latest value of the head, and then again the same part is repeated again and again.
    */

    head = insert_begin(head, 20);
    head = insert_begin(head, 200);
    head = insert_begin(head, 2000);
    printlist_recursive(head);

    return 0;
}