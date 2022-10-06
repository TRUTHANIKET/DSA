#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node*right,*left;

    /* data */
};

Node * createnode(int data){
    Node* newnode=new Node();
    newnode->data=data;
    newnode->left=newnode->right=nullptr;
    return newnode;
}

void displaytree(Node * root){
if(root==nullptr) return;
cout<<" | " <<root->data<<" | ";
displaytree(root->left);
displaytree(root->right);

}


int main(){
Node * root=createnode(3);

}