#include <iostream>

using namespace std;

class singlyNode
{
public:
    int data;
    singlyNode *next;
    singlyNode() = default;
    singlyNode(int d)
    {
        data = d;
        next = NULL;
    }

    // functions :

    // insert head
    singlyNode *insert_head(singlyNode *head, int d)
    {
        singlyNode *newnode = new singlyNode(d);
        if (head == NULL)
        {
            cout << "no linked list :  first node value : " << newnode->data << endl;
            return newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            return head;
        }
    }

    // 2) insert tail'
    singlyNode *insert_tail(singlyNode *head, int d)
    {
        singlyNode *newnode = new singlyNode(d);
        if (head == NULL)
        {
            cout << "no linked list :  first node value : " << newnode->data << endl;
            return newnode;
        }
        else
        {
            singlyNode *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = NULL;
            return head;
        }
    }

    // 3) delete head
    singlyNode *delete_head(singlyNode *head)
    {
        singlyNode *temp = head;
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        else
        {
            head = head->next;
            delete head;
            return head;
        }
    }

    // 4) delete tail
    singlyNode *delete_tail(singlyNode *head)
    {
        singlyNode *temp = head;
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        else
        {
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            delete (temp->next);
            temp->next = NULL;
            return head;
        }
    }

    // display
    void print(singlyNode *head)
    {
        singlyNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n"
             << flush;
    }
};

class doublyNode
{
    int data;
    doublyNode *next;
    doublyNode *prev;

public:
    doublyNode() = default;
    doublyNode(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }

    // functions :

    // 1) insert in begining
    doublyNode *insert_Head(doublyNode *head, int d)
    {
        doublyNode *newnode = new doublyNode(d);
        if (head == NULL)
        {
            cout << "the linked list is empty, first node value : " << newnode->data << endl;
            return newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
            return head;
        }
    }

    // 2) insert tail
    doublyNode *insert_Tail(doublyNode *head, int d)
    {
        doublyNode *newnode = new doublyNode(d);
        if (head == NULL)
        {
            cout << "the linked list is empty, first node value : " << newnode->data << endl;
            return newnode;
        }
        else
        {
            doublyNode *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
            newnode->next = NULL;
            return head;
        }
    }

    // 3) delete head
    doublyNode *delete_Head(doublyNode *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        else
        {
            doublyNode *temp = head;
            head = head->next;
            delete temp;
            head->prev = NULL;
            return head;
        }
    }

    // 4) delete tail
    doublyNode *delete_Tail(doublyNode *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        else
        {
            doublyNode *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->prev->next = NULL;
            delete (temp);
            return head;
        }
    }

    // 5) display
    void Print(doublyNode *head)
    {
        doublyNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n"
             << flush;
    }
};

class circularNode
{
    int data;
    circularNode *next;
    circularNode(int d)
    {
        data = d;
        next = NULL;
    }

    // functions

    // insert head
    circularNode *insert_head(circularNode *head, int d)
    {
        /*
        one method is to add the node at the end and make that node as head return temp at last.
        */

        /*
        second method is to add the node at the second position and then copy the value of the first node in recently added second node and fill the node's data part by the given value.
        */

        circularNode *newnode = new circularNode(d);
        if (head == NULL)
        {
            cout << "the linked list is empty, first node is : " << newnode->data << endl;
            return newnode;
        }
        else
        {
            int temp = d;
            newnode->next = head->next;
            newnode->data = head->data;
            head->data = temp;
            head->next = newnode;
            return head;
        }
    }
};
class stack
{

    // stack operation : implementaion stack using linked list

    // push : i
};

class queue
{
};

class deque
{
};

int main()
{

    int option = 0;
    while (option != 7)
    {
        cout << "Enter which type of data structure you want to implement : " << endl;
        cout << "1) Stack" << endl;
        cout << "2) singly linked list " << endl;
        cout << "3) Doubly linked list  " << endl;
        cout << "4) Circular linked list  " << endl;
        cout << "5) queue  " << endl;
        cout << "6) deque " << endl;
        cout << "7) exit " << endl;
        cout << "\n\n\n enter your option : ";
        cin >> option;
        switch (option)
        {
            // case 1:
            //     // stack
            //     break;

        case 2:
            // singly linked list
            singlyNode s;
            singlyNode *head = NULL;
            head = s.insert_head(head, 10);
            head = s.insert_tail(head, 20);
            head = s.insert_tail(head, 30);
            head = s.delete_head(head);
            s.print(head);

            break;

        case 3:
            doublyNode d;
            doublyNode *Head = NULL;
            Head = d.insert_Head(Head, 10);
            Head = d.insert_Head(Head, 10);
            Head = d.insert_Head(Head, 10);
            Head = d.insert_Tail(Head, 20);
            Head = d.insert_Tail(Head, 20);
            Head = d.insert_Tail(Head, 30);
            Head = d.delete_Head(Head);
            Head = d.delete_Tail(Head);
            d.Print(Head);
            break;

            // case 4:
            //     // circular linked list
            //     break;

            // case 5:
            //     // queue
            //     break;

            // case 6:
            //     // deque
            //     break;

            // case 7:
            //     option = 7;

            // default:
            //     cout << "Wrong choice , please try again !!" << endl;
        }
    }
    cout << "\n\n\n DONE !!!" << endl;
    return 0;
}