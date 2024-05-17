/**
 * Sure, here are some examples for each type of tree traversal:
 *
 *
 1. Inorder Traversal: LPR
  * Example 1: Consider the following binary search tree:
        5
       / \
      3   8
     / \ / \
    1  4 6  9
The inorder traversal of this tree would be: 1 3 4 5 6 8 9.
   * Example 2: Consider the following binary tree:
        A
       / \
      B   C
     / \   \
    D   E   F
The inorder traversal of this tree would be: D B E A F C.


 2. Preorder Traversal:PLR
  * Example 1: Consider the following binary search tree:
        5
       / \
      3   8
     / \ / \
    1  4 6  9
The preorder traversal of this tree would be: 5 3 1 4 8 6 9.
   * Example 2: Consider the following binary tree:
         A
       / \
      B   C
     / \   \
    D   E   F
The preorder traversal of this tree would be: A B D E C F.


 3. Postorder Traversal:LRP
  * Example 1: Consider the following binary search tree:
        5
       / \
      3   8
     / \ / \
    1  4 6  9
The postorder traversal of this tree would be: 1 4 3 6 9 8 5.
   * Example 2: Consider the following binary tree:
        A
       / \
      B   C
     / \   \
    D   E   F
The postorder traversal of this tree would be: D E B F C A.


 4. Level Order Traversal: LEVEL WISE TRAVERSE PRINTHE ELEMENTS OF EACH LEVEL FROM LEFT TOT RIGHT.

  * Example 1: Consider the following binary search tree:
        5
       / \
      3   8
     / \ / \
    1  4 6  9
The level order traversal of this tree would be: 5 3 8 1 4 6 9.
   * Example 2: Consider the following binary tree:
        A
       / \
      B   C
     / \   \
    D   E   F
The level order traversal of this tree would be: A B C D E F.


![](DY4NXTzDMhz0sW4FZKCGUudgb7rIT4Gc.svg)

 *
 */
#include <iostream>

#include <bits/stdc++.h>

using namespace std;

struct node
{

    int data;
    node *left;
    node *right;
    node(int x)
    {

        data = x;
        left = NULL;
        right = NULL;
    }
};

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


void printLevel(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << "\n";
            q.push(NULL);
            continue;
        }
        cout << curr->data << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}


// O(n)
void printLevels(node *root)
 {
     if (root == NULL)
         return;
     queue<node *> q; 
     q.push(root);
     while (q.empty() == false)
     {
         int count = q.size();
         for (int i = 0; i < count; i++)
         {
             node *curr = q.front();
             q.pop();
             cout << curr->data << " ";
             if (curr->left != NULL)
                 q.push(curr->left);
             if (curr->right != NULL)
                 q.push(curr->right);
         }
         cout << "\n";
     }
 }
int main()
{

    struct node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(100);
    root->left->right = new node(101);
    root->right->right = new node(103);
    root->right->left = new node(104);
    preorder(root);
    cout << "\n";
    inorder(root);
    cout << "\n";
    postorder(root);
    cout << "\n";
    cout << "\n";
    printLevel(root);
    cout << "\n"; 
    cout << "\n";
    printLevels(root);


    return 0;
}