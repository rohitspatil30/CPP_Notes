/**
 BST stands for Binary Search Tree, which is a type of binary tree in which each node has at most two children, and the left child of a node has a value less than the node's value, while the right child has a value greater than the node's value. This property makes it easy to search for a specific value in the tree, as you can eliminate half of the remaining values at each step of the search.
 Here is a diagram of a simple BST:

          8
        /   \
       3     10
      / \      \
     1   6      14
        / \    /
       4   7  13


And here is an example implementation of a BST in C++:
 * 
 */
#include<bits/stdc++.h>

using namespace std;

struct node{

    int data;
    node * left ;
    node * right;

    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

int main(){

    struct node * root = new node(40);
    root->left = new node(20);
    root->right = new node(90);
    root->left->right=new node(23);

    struct node * child = new node(230);
    root->right->left = child;


    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<root->left->right->data<<endl;
    cout<<root->right->left->data<<endl;



}