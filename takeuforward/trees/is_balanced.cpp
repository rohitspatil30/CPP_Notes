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

int isBalanced(Node *root)
{

    if (root == NULL)
        return 0;

    int leftHeight = isBalanced(root->left);

    if (leftHeight == -1)
        return -1;

    int rightHeight = isBalanced(root->right);

    if (rightHeight == -1)
        return -1;

    if (abs(leftHeight - rightHeight) > 1)
        return -1;

    return max(leftHeight, rightHeight) + 1;
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    // root->right->right->left = new Node(550);

    cout << isBalanced(root);
}
// O(n) O(h);

//Time Complexity: O(N) 

// Space Complexity: O(1) Extra Space + O(H) Recursion Stack space (Where “H”  is the height of binary tree)