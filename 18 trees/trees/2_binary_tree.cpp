#include <iostream>

#include <bits/stdc++.h>

/*
binary tree is a tree which has at most 2 children , they are of 3 types

full binary tree which has either 0 or 2 chilren

complete binary tree which has 0,1, or 2 chilren but the tree should b filled from left most side

perfect binary tree where every node except for leaf nodes have 2 children that is all the levels are filled completely

*/
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = NULL;
        right = NULL;
    }
};

// Node *insert(Node *root, int x)
// {
//     if (root == NULL)
//     {
//         root->key = x;
//         root->left = NULL;
//         root->right = NULL;
//         return root;
//     }
//     else if (root != NULL)
//     {
//         if (root->left == NULL)
//         {
//             Node *newnode = new Node(x);
//             root->left = newnode;
//         }
//         if (root->right == NULL)
//         {
//             Node *newnode = new Node(x);
//             root->right = newnode;
//         }
//     }
//     return root;
// }

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

void preorder(Node *root)
{
    if (root != NULL)
    {

        cout << root->key << " ";
        preorder(root->left);

        preorder(root->right);
    }
}

void postorder(Node *root)
{
    if (root != NULL)
    {

        postorder(root->left);

        postorder(root->right);
        cout << root->key << " ";
    }
}

// time complexity for all is O(n)
// space complexity : O(h+1) or O(h) h: height of tree

// insert  function :
/*
logic : we will first check if the
*/

int main()
{
    // static
    //  Node root(34);
    //  Node *ptr = &root;
    //  // cout << ptr->key << endl;
    //  // cout << ptr->left << endl;
    //  // cout << ptr->right << endl;
    //  cout << root.key << endl;
    //  cout << root.left << endl;
    //  cout << root.right << endl;

    // dynamic : method 1 :
    // Node *root = new Node(34);        // object root
    // Node *left_child = new Node(33);  // new object
    // Node *right_child = new Node(35); // new object
    // root->left = left_child;
    // root->right = right_child;

    // METHOD 2 :
    Node *root = new Node(34); // object
    // rest all are pointer.
    root->left = new Node(45);
    root->right = new Node(90);
    root->left->left = new Node(24);
    root->left->right = new Node(35);
    root->right->left = new Node(11);
    root->right->right = new Node(1);

    /*
    MISCELLANEOUS WORK :
        cout << left_child->key << endl;
        cout << root->left->key << endl;
        cout << right_child->key << endl;
        cout << root->right->key << endl;

        cout << root->left << " " << left_child << endl;
        cout << root->right << " " << right_child << endl;

        if (root->left->left == NULL && root->left->right == NULL && root->right->right == NULL && root->right->left == NULL)
        {
            cout << "hi" << endl;
        }
        else
        {
            cout << "hello" << endl;
        }
    */

    //    ===============================================

    preorder(root);
    cout << "\n";
    postorder(root);
    cout << "\n";
    inorder(root);

    return 0;
}