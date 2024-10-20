/*
doubly linked list is the linked with both ends of the node having address field and data field in the center. this is a 3 parted node , with partitions called as :

1) prev : store address of previous node .
2) data : store the actual data of that node .
3) next: store the address of the next node in the adrress field.

NULL <->| prev | data | next |<-> NULL

we can traverse in both the direcctions  and both the directions have null in it.


*/

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

int main()
{

    Node *head = new Node(23);
    Node *temp = new Node(23);
    Node *temp1 = new Node(23);
    head->next = temp;
    temp->prev = head;
    temp->next = temp;
    temp1->prev = temp;

    return 0;
}

/*
singly linked list vs doubly linked list :

advantages of doubly linked list :

we can traverse in both the directions : example :  web pages .
we can insert and delete from front as well as back in O(1) time.


disadvatages :
complex and  extra space for prev pointer .
*/