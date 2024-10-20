// #include <iostream>

// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// Node *insert_end(Node *head, int value)
// {

//     Node *temp = new Node(value);

//     if (head == NULL)
//     {
//         return temp;
//     }
//     Node *cur = head;
//     while (cur->next != NULL)

//     {
//         cur = head->next;
//     }
//     cur = temp;
//     return head;
// }

// void printlist_recursive(Node *head)
// {
//     Node *temp = head;
//     if (temp == NULL)
//     {
//         return;
//     }
//     else
//     {
//         cout << temp->data << " ";
//         printlist_recursive(temp->next);
//     }
// }

// int main()
// {

//     Node *head = new Node(10);
//     head = insert_end(head, 200);
//     head = insert_end(head, 20022);
//     head = insert_end(head, 2001112);
//     printlist_recursive(head);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    printlist(head);
    return 0;
}
