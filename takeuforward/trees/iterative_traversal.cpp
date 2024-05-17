#include <bits/stdc++.h>

using namespace std;

struct node {
  int data;
  struct node * left, * right;
};

vector < int > preOrderTrav(node * curr) {
  vector < int > preOrder;
  if (curr == NULL)
    return preOrder;

  stack < node * > s;
  s.push(curr);

  while (!s.empty()) {
    node * topNode = s.top();
    preOrder.push_back(topNode -> data);
    s.pop();
    if (topNode -> right != NULL) 
      s.push(topNode -> right);
    if (topNode -> left != NULL)
      s.push(topNode -> left);
  }
  return preOrder;

}
vector < int > inOrderTrav(node * curr) {
  vector < int > inOrder;
  stack < node * > s;
  while (true) {
    if (curr != NULL) {
      s.push(curr);
      curr = curr -> left;
    } else {
      if (s.empty()) break;
      curr = s.top();
      inOrder.push_back(curr -> data);
      s.pop();
      curr = curr -> right;
    }
  }
  return inOrder;
}

vector<int> postorderTraversal(node* root) {
        vector<int>v;
        if(root==NULL) return v;
        stack<node*> st;
        st.push(root);
        while(!st.empty()){
            node*node=st.top();
            st.pop();
            v.push_back(node->data);
            if(node->left!=NULL) st.push(node->left);
            if(node->right!=NULL) st.push(node->right);
        }
        reverse(v.begin(),v.end());
        return v;
    }

struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

int main() {

  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(8);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  root -> right -> right -> left = newNode(9);
  root -> right -> right -> right = newNode(10);

  vector < int > preOrder;
  preOrder = preOrderTrav(root);

  cout << "The preOrder Traversal is : ";
  for (int i = 0; i < preOrder.size(); i++) {
    cout << preOrder[i] << " ";
  }

cout<<"\n\n\n";
vector < int > inOrder;
  inOrder = inOrderTrav(root);

  cout << "The inOrder Traversal is : ";
  for (int i = 0; i < inOrder.size(); i++) {
    cout << inOrder[i] << " ";
  }

  cout<<"\n\n\n";


  vector < int > postOrder;
  postOrder = postorderTraversal(root);

  cout << "The postOrder Traversal is : ";
  for (int i = 0; i < postOrder.size(); i++) {
    cout << postOrder[i] << " ";
  }
  return 0;
}