#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor that cretes the node as follows :
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int main()
{

    // in linked list the elements may not be in the contiguous location.
    // they are stroed one after the other
    /*

    head ->| value | next |-> | value | next |->|value| NULL |

    advantages : efficient insertion and deletion.
    also the linked list will grow dynamically.

    */

    //    implementaion :

    Node *head = new Node(10); // giving value to the first node which is called as the head which stores the address of the first node .

    Node *temp1 = new Node(23); // next we create the second node followed by the third one .
    Node *temp2 = new Node(90);

    head->next = temp1; // here we are linking the head to temp1 and temp1 next is pointing to the temp2's address hence we can say that the linked list is created using the 3 nodes we can still add more of them using a switch case by asking from the user whether he wants to create a node or not .

    temp1->next = temp2;

    return 0;
}