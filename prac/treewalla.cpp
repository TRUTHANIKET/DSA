#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* right,*left;
    /* data */
};

Node* createnode(int data){
    Node* newnode=new Node();
    newnode->data=data;
    newnode->right=newnode->left=nullptr;
}
void display(Node * root){
    if(root==nullptr) return;
    cout<<" | "<<root->data<<" | ";
    display(root->left);
    display(root->right);
}



int main(){
Node* root =createnode(3);
root->left=createnode(2);
root->right=createnode(5);
root->left->left=createnode(1);
display(root);
}