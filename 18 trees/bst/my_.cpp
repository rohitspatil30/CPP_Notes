#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data = x;
        left =right = NULL;
    }
};

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


bool search(node* root,int key){
    if(root==NULL){
        return false;
    }
    else if(root->data==key){
        return true;
    }
    else if(root->data > key ){
        return search(root->left,key);
    }
    else if(root->data<key){
        return search(root->right,key);
    }
    return false;
}

node *insert(node *root, int value){
    if(root==NULL){
        return new node(value);
    }
    else if(root->data < value){
        root->right=insert(root->right, value);
    }
    else if(root->data> value){
        root->left=insert(root->left, value);
    }
    return root;
}

node *successor(node *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}

 
node *delNode(node* root, int value){
    if(root==NULL){
        return root;
    }
    else if(root->data<value){
           root->right = delNode(root->right, value);
    }
    else if(root->data>value){
        root->left= delNode(root->left, value);

    }
    else if(root->data == value){
        if(root->right==NULL){
            node *temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left==NULL){
            node *temp = root->right;
            delete root;
            return temp;
        }
        else{
            node *success = successor(root);
            root->data = success->data;
            root->right = delNode(root->right, success->data);
        }
    }
    return root;


}

node *floor(node *root, int value){
    node *ans = NULL;
    while(root!=NULL){
        if(root->data==value){
            return root;
        }
        else if(root->data<value){
            ans = root;
            root=root->right;
        }
        else if(root->data>value){
            root=root->left;
        }
    }
    return ans;

}

int main(){
     
     struct  node *root = new node(50);
     root->left = new node(40);
     root->right=new node(60);
     root->left->left= new node(35);
     root->left->right=new node(45);
     root->right->left= new node (55);
     root->right->right = new node(65);
     inorder(root);
     cout<<"\n";
     preorder(root);
     cout<<"\n";
     postorder(root);
     cout<<"\n";
     cout<<boolalpha<<search(root,40);
     cout<<"\n";
     root=insert(root, 10);
     inorder(root);
     cout<<"\n";
     root=delNode(root, 40);
     inorder(root);
     cout<<"\n";
     cout<<"floor : "<<floor(root, 5)->data<<endl;
     return 0;
     
 }