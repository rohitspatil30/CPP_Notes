#include<iostream>

#include<bits/stdc++.h>


using namespace std;


struct node{
    int data;
    node *next;
    node(int x){
        data =x;
        next = NULL;
    }

};

node *reverse(node *head){
    node *newhead = NULL;
    while(head!=NULL){
        node *next =head->next;
        head->next =newhead;
        newhead =head;
        head =next;
    }
    return newhead;
}

node *remove_nth_from_end(node *head, int n){
    node *start = new node(NULL);
    start->next = head;
    node *fast =start;
    node *slow = start;

    for(int i=1;i<=n;i++){
        fast=fast->next;
    }

    while(fast->next!=NULL){
        fast=fast->next;
        slow =slow->next;

    }

    slow->next =slow->next->next;

    return start->next;

}

node *return_middle(node* head){
    node *fast =head;
    node* slow =head;
    while(fast!=NULL && fast->next!=NULL){
        fast =fast->next->next;
        slow =slow->next;

    }
    return slow;
}

void traverse_ll(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;

    }
}

int main(){

    struct  node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = new node(60);
    head->next->next->next->next->next->next = new node(70);
    head->next->next->next->next->next->next->next = new node(80);
    head->next->next->next->next->next->next->next->next = new node(90);
    head->next->next->next->next->next->next->next->next->next = new node(100);
    traverse_ll(head);
    cout<<"\n";


    // head = remove_nth_from_end(head,2);
    // traverse_ll(head);

    // node *middle = return_middle(head);
    // cout<<"\n"<<middle->data<<endl;
    
    return 0;

}