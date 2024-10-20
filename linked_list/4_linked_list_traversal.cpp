// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// // void printlist(Node *head)
// // {
// //     Node *curr = head;
// //     while (curr != NULL)
// //     {
// //         cout << curr->data << " ";
// //         curr = curr->next;
// //     }
// // }

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
//     // Node *temp1 = new Node(20);
//     // Node *temp2 = new Node(30);
//     // Node *temp3 = new Node(40);

//     // head->next = temp1;
//     // temp1->next = temp2;
//     // temp2->next = temp3;
//     // temp3->next = NULL;

//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(40);
//     printlist_recursive(head);
//     return 0;
// }

// #include <bits/stdc++.h>

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

// void printlist_iterative(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
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
//     head->next = new Node(23);
//     head->next->next = new Node(45);
//     printlist_iterative(head);
//     cout << "\n"
//          << flush;
//     printlist_recursive(head);

// }

// // insert at the beggining :

// #include <bits/stdc++.h>

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

// void print_list_iter(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << "\n"
//          << flush;
// }

// void print_list_recur(Node *head)
// {
//     Node *temp = head;
//     if (temp == NULL)
//     {
//         return;
//     }
//     else
//     {
//         cout << temp->data << " ";
//         print_list_recur(temp->next);
//     }
// }

// Node *insert_at_beg(Node *head, int value)
// {
//     Node *temp = new Node(value);
//     if (head == NULL)
//     {
//         cout << "we created the first node with the value of :" << temp->data << endl;
//         return temp;
//     }
//     else
//     {
//         temp->next = head;
//         head = temp;
//     }

//     return head;
// }

// Node *insert_at_end(Node *head, int value)
// {
//     Node *temp = new Node(value);
//     Node *curr = head;
//     if (head == NULL)
//     {
//         cout << "the linked list was empty, we created the first node with value " << temp->data << endl;
//         return temp;
//     }
//     else
//     {
//         while (curr->next != NULL)
//         {
//             curr = curr->next;
//         }
//         curr->next = temp;
//     }

//     return head;
// }

// Node *delete_from_beg(Node *head)
// {

//     if (head == NULL)
//     {
//         cout << "linked list is empty ." << endl;
//         return NULL;
//     }
//     else
//     {
//         Node *new_node = head->next;
//         cout << "the deleted element is : " << head->data << endl;
//         delete (head);
//         head = NULL;
//         return new_node;
//     }
// }

// Node *delete_from_end(Node *head)
// {
//     Node *temp = head;
//     if (head == NULL)
//     {
//         cout << "linked list is empty " << endl;
//         return NULL;
//     }
//     else if (head->next == NULL)
//     {
//         delete head;
//         return NULL;
//     }
//     else
//     {
//         while (temp->next->next != NULL)
//         {
//             temp = temp->next;
//         }
//         cout << temp->next->data << " is the deleted element " << endl;
//         delete temp->next;
//         temp->next = NULL;
//     }
//     return head;
// }

// Node *insertAtPos(Node *head, int x, int pos)
// {
//     Node *temp = new Node(x);
//     if (head == NULL)
//     {
//         if (pos == 1)
//             return temp;
//         else
//             return head;
//     }
//     if (pos == 1)
//     {
//         temp->next = head;
//         return temp;
//     }
//     Node *curr = head;
//     for (int i = 1; i < pos - 1; i++)
//     {
//         curr = curr->next;
//         if (curr == NULL)
//         {
//             cout << "Position out of range" << endl;
//             return head;
//         }
//     }
//     temp->next = curr->next;
//     curr->next = temp;
//     return head;
// }

// Node *del(Node *head, int pos)
// {
//     Node *add = NULL;
//     Node *temp = head;
//     if (head == NULL)
//     {
//         cout << "the linked list is empty  " << endl;
//         return NULL;
//     }
//     if (pos == 1)
//     {
       
//     }
//     else
//     {
//         for (int i = 2; i < pos - 1; i++)
//         {
//             temp = temp->next;
//         }
//         add = temp->next->next;
//         delete (temp->next);
//         temp->next = add;
//     }

//     return head;
// }
// int main()
// {
//     Node *head = NULL;
//     head = insert_at_beg(head, 23);
//     head = insert_at_beg(head, 45);
//     head = insert_at_beg(head, 145);

//     print_list_iter(head);
//     cout << "\n"
//          << flush;
//     print_list_recur(head);
//     cout << "\n"
//          << flush;

//     head = insert_at_end(head, 34);
//     head = insert_at_end(head, 7);
//     head = insert_at_end(head, 0);

//     print_list_iter(head);
//     cout << "\n"
//          << flush;
//     print_list_recur(head);
//     cout << "\n"
//          << flush;

//     // head = delete_from_beg(head);
//     // cout << "\n"
//     //      << flush;
//     // print_list_iter(head);
//     // cout << "\n"
//     //      << flush;

//     // head = delete_from_beg(head);
//     // print_list_iter(head);
//     // cout << "\n"
//     //      << flush;

//     // head = delete_from_end(head);
//     // cout << "\n"
//     //      << flush;
//     // print_list_iter(head);
//     // cout << "\n"
//     //      << flush;

//     // head = delete_from_end(head);
//     // print_list_iter(head);
//     // cout << "\n"
//     //      << flush;

//     int pos;
//     int v;
//     cout << "enter the position you want to insert a node" << endl;
//     cin >> pos;
//     cout << "enter the value of the node " << endl;
//     cin >> v;

//     head = insertAtPos(head, v, pos);
//     print_list_iter(head);

//     head = del(head, 4);
//     print_list_iter(head);

//     cout << "\n"
//          << flush;
//     head = del(head, 4);
//     cout << "\n"
//          << flush;
//     head = del(head, 1);

//     print_list_iter(head);

//     return 0;
// }

// ---------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------

// doubly linked list
// #include <iostream>

// using namespace std;

// class doublyNode
// {
// public:
//     int data;
//     doublyNode *next;
//     doublyNode *prev;
//     doublyNode() = default;
//     doublyNode(int x)
//     {
//         data = x;
//         prev = NULL;
//         next = NULL;
//     }

//     // functions :
//     // insert head:
//     doublyNode *insert_head(doublyNode *head, int x)
//     {
//         doublyNode *newnode = new doublyNode(x);
//         if (head == NULL)
//         {
//             cout << "no doubly linked list is created, we created one with the value : " << newnode->data << endl;
//             return newnode;
//         }
//         else
//         {
//             newnode->next = head;
//             head->prev = newnode;
//             head = newnode;
//             return head;
//         }
//     }
//     // funtion done!

//     // insert tail
//     doublyNode *insert_tail(doublyNode *head, int x)
//     {
//         doublyNode *newnode = new doublyNode(x);
//         if (head == NULL)
//         {
//             cout << "no doubly linked list is created, we created one with the value : " << newnode->data << endl;
//             return newnode;
//         }
//         else
//         {
//             doublyNode *temp = head;
//             while (temp->next != NULL)
//             {
//                 temp = temp->next;
//             }
//             temp->next = newnode;
//             newnode->prev = temp;
//             newnode->next = NULL;
//             return head;
//         }
//     }
//     // function done!!

//     // delete head

//     doublyNode *delete_head(doublyNode *head)
//     {
//         if (head == NULL)
//         {
//             return head;
//         }
//         if (head->next == NULL)
//         {
//             delete head;
//             return head;
//         }
//         else
//         {
//             // doublyNode *temp = head->next;
//             // delete (head);
//             // head = temp;
//             // head->prev = NULL;
//             // return head;

//             // head = head->next;
//             // delete (head->prev);
//             // head->prev =NULL;
//             // return head;

//             doublyNode *temp = head;
//             head = head->next;
//             head->prev = NULL;
//             delete temp;
//             return head;
//         }
//     }
//     // function done!!

//     // delete tail
//     doublyNode *delete_tail(doublyNode *head)
//     {
//         if (head == NULL)
//         {
//             return head;
//         }
//         if (head->next == NULL)
//         {
//             delete head;
//             return head;
//         }
//         else
//         {
//             doublyNode *temp = head;
//             while (temp->next != NULL)
//             {
//                 temp = temp->next;
//             }
//             doublyNode *curr = temp;
//             temp->prev->next = NULL;
//             delete curr;
//             return head;
//         }
//     }
//     // function done!!

//     // traversing
//     void print(doublyNode *head)
//     {
//         doublyNode *temp = head;
//         while (temp != NULL)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << "\n"
//              << std::flush;
//     }
//     // function done!!
// };

// int main()
// {

//     doublyNode d;
//     doublyNode *head = new doublyNode(5);
//     head = d.insert_head(head, 10);
//     head = d.insert_head(head, 20);
//     head = d.insert_tail(head, 30);
//     head = d.insert_head(head, 40);
//     d.print(head);
//     head = d.delete_head(head);
//     head = d.delete_tail(head);
//     d.print(head);

//     return 0;
// }
// ---------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------

// circular linked lsit :

#include <iostream>

using namespace std;

class CircularNode
{

    int data;
    CircularNode *next;
    CircularNode(int x)
    {
        data = x;
        next = NULL;
    }
    // functions:

    // traversing :
    void print(CircularNode *head)
    {

        CircularNode *temp = head;
        if (head == NULL)
        {
            cout << "no list present " << endl;
        }
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << "\n"
             << flush;
    }
    // function done !!

    CircularNode *insert_head(CircularNode *head, int x)
    {
    }

    CircularNode *insert_head()
    {
    }
};

int main()
{

    return 0;
}