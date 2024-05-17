/*

    trees are the non linear data structure : 


    In data structures and algorithms, a tree is a hierarchical data structure consisting of nodes connected by edges. The topmost node in a tree is called the root node. Each node in a tree can have zero or more child nodes, and each child node can have zero or more child nodes, forming a tree-like structure.

    
 There are several types of trees in data structures and algorithms, including:
 1. Binary Tree: A binary tree is a tree in which each node has at most two children, referred to as the left child and the right child.
 2. Binary Search Tree: A binary search tree is a binary tree in which the left child of a node has a value less than the node's value, and the right child has a value greater than the node's value.
 3. AVL Tree: An AVL tree is a self-balancing binary search tree in which the heights of the left and right subtrees of any node differ by at most one.
 4. Red-Black Tree: A red-black tree is a self-balancing binary search tree in which each node is either red or black, and the root and leaves are black.
 Here are the diagrams for each of these types of trees:

 Binary Tree:
        1
     /   \
    2     3
   / \   / \
  4   5 6   7
Binary Search Tree:
        4
     /   \
    2     6
   / \   / \
  1   3 5   7
AVL Tree:
        4
     /   \
    2     6
   / \   / \
  1   3 5   7
Red-Black Tree:
        4B
     /   \
    2B    6B
   / \   / \
  1R  3R 5R  7R


Now, let's take a look at the diagram for the following terms in a tree:
 - Root: The topmost node of a tree is called the root node.
- Parent: A node is said to be the parent of its children.
- Child: A node is said to be a child of its parent.
- Siblings: Nodes that share the same parent are called siblings.
- Ancestor: A node is said to be an ancestor of its descendants.
- Descendants: Nodes that are below a particular node are called its descendants.
- Subtree: A subtree is a portion of the tree that is itself a tree.
- Leaf nodes: Leaf nodes are nodes that do not have any children.
 Here is the diagram:
            A
         /   \
        B     C
       / \   / \
      D   E F   G
         /     / \
        H     I   J
- The root node is A.
- B and C are children of A, and A is the parent of B and C.
- D, E, F, and G are children of B, and B is the parent of D, E, F, and G.
- H is a child of E, and E is the parent of H.
- B, D, E, F, G, H, I, and J are descendants of A.
- The subtree rooted at B consists of the nodes B, D, E, and H.
- The leaf nodes are D, H, F, I, and J.


Sure, I can explain and provide diagrams for the different types of trees in data structures and algorithms:
 1. Full Binary Tree: A full binary tree is a binary tree in which every node has either zero or two children. In other words, every node has either two children or no children. Here's an example diagram of a full binary tree:
        A
      /   \
     B     C
    / \   / \
   D   E F   G
2. Complete Binary Tree: A complete binary tree is a binary tree in which all levels except possibly the last level are completely filled, and all nodes are as far left as possible in the last level. Here's an example diagram of a complete binary tree:
        A
      /   \
     B     C
    / \   /
   D   E F
3. Perfect Binary Tree: A perfect binary tree is a binary tree in which all levels are completely filled, and all nodes have two children except for the leaf nodes. Here's an example diagram of a perfect binary tree:
        A
      /   \
     B     C
    / \   / \
   D   E F   G

4. Balanced Binary Tree: A balanced binary tree is a binary tree in which the difference in height between the left and right subtrees of any node is at most one. Here's an example diagram of a balanced binary tree: height log n 
        A
      /   \
     B     C
    / \   / \
   D   E F   G
  / \
 H   I
5. Degenerate Binary Tree: A degenerate binary tree is a binary tree in which each parent node has only one associated child node. In other words, it's a tree in which each node has only one child. Here's an example diagram of a degenerate binary tree:
        A
         \
          B
           \
            C
             \
              D
               \
                E
I hope this helps! Let me know if you have any further questions.

    trees are having some common terms such as : 
*/


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
    
    int data;
    node* left;
    node *right;
    node(int x){
        left = NULL;
        right = NULL;
        data = x;
    }
};

//1) preorder traversal plr
void preorder(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// 2) inorder traversal : lpr
void inorder(node *root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


//3) postorder  traversal : lrp
void postorder(node *root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}
//4) level order traversal technique : 4.1) using NULL pointer .
void levelorder_NULL(node *root){
    queue<node*> q ;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        struct node* curr = q.front();
        q.pop();
        if(curr ==NULL){
            q.push(NULL);
            cout<<"\n";
            continue;
        }
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
//5) levelorder_size()
void levelorder_size(node* root){
    queue<node*> q ;
    q.push(root);
    while(q.empty()!=true){
        int size = q.size();
        for(int i=0;i<size;i++){
            struct node * curr = q.front();
            q.pop();
            cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
        
        }
        cout<<"\n";
    }
}

//6) int height
int height(node *root){
    if(root ==NULL){
        return 0;
    }
    else{ return (1+max(height(root->left),height(root->right)));
        
    }
}

//7) is_balnaced :
int is_balanced(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh = is_balanced(root->left);
    if(lh==-1) return -1;
    int rh = is_balanced(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return max(lh,rh)+1;

}

//8)  diameter;
int height(node *root, int& diameter){
    if(root == NULL) return 0;
    int lh=(root->left,diameter);
    int rh =(root->right,diameter);
    diameter = max(diameter,lh+rh);
    return 1+max(lh,rh);
    
}

int diameter(node* root){
    int diameter =0;
    height(root,diameter);
    return diameter;
}

int main()
{
    
    struct node *root = new node(10);
    root->left = new node(20);
    root->right =new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);
    
    // writing the function below off all the codes i learnt till now. 
    // traversal techinques : 
    cout<<"the preorder traversal is : ";
    preorder(root);
    cout<<"\nthe inorder traversal is :";
    inorder(root);
    cout<<"\nthe inorder traversal is :";
    postorder(root);
    cout<<"\n";
    cout<<"the level order traversal is : \n";
    levelorder_NULL(root);
    cout<<"\nthe level order traversal using size is : \n";
    levelorder_size(root);
    cout<<"the height of binary tree is : "<<height(root);
    cout<<boolalpha<<"is the binary tree balanced : "<<is_balanced(root);
    cout<<"\nthe diameter of the binary tree is : "<<diameter(root)<<endl;
    
    

    return 0;
}
