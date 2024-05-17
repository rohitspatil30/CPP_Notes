#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int height(Node* node, int& diameter) {

        if (!node) {
            return 0;
        }

        int lh = height(node->left, diameter);
        int rh = height(node->right, diameter);

        diameter = max(diameter, lh + rh);

        return 1 + max(lh, rh);
    }

int diameterOfBinaryTree(Node* root) {
        int diameter = 0;
        int h =height(root, diameter);
        cout<<"the height of the binary tree is : "<<h<<endl;
        return diameter;
    }

int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->right->left = new Node(550);
    root->right->right->left->left = new Node(550);

    cout << diameterOfBinaryTree(root);
}
// O(n) O(h);

// Time Complexity: O(N) 

// Space Complexity: O(1) Extra Space + O(H) Recursion Stack space (Where “H”  is the height of binary tree )