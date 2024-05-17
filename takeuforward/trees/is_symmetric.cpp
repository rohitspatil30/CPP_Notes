#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int val;
  Node *left, *right;
};

bool f(Node *root1, Node *root2)
{
  if (!root1)
    return !root2;
  if (!root2)
    return !root1;
  return (root1->val == root2->val) && f(root1->left, root2->right) && f(root1->right, root2->left);
}
bool isSymmetric(Node *root)
{
  if (!root)
    return true;
  return f(root->left, root->right);
}
Node *newNode(int data)
{
  Node *node = new Node;
  node->val = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}
int main()
{
  int i, j;
  Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(2);
  root->right->right = newNode(4);
  root->left->left = newNode(4);
  // root->left->left->left = newNode(4);
  cout << isSymmetric(root)<<endl;
  return 0;
}

/****
 * Time Complexity: O(N)

Space Complexity: O(N)
*/