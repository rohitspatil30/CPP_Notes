/*
circular linked list : the circular linked list is the one directional linked list with the last node having the address of the first node .

*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

int main()
{

    Node *head = new Node(20);
    Node *n1 = new Node(10);
    Node *n2 = new Node(30);

    head->next = n1;
    n1->next = n2;
    n2->next = head;

    return 0;
}

/*
advantages : we can traverse the whole list from any node.
implementaion of algorithms like round robins.
we can insert at the beggining and the tail by just maintaining the tail pointer .


disadvatages :implementaions are complex .

*/