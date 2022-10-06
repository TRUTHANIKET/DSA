#include<iostream>
using namespace std;
template <typename type>

struct Node{
    public:
    type data;
    Node*left;
    Node*right;
    Node*get_data(){
        Node *p=new Node;
        cout<<"\n enter a value ";
        cin>p->data;
        p->left=NULL;
        p->right=NULL;
        return p;
    }
    void pre(Node*){
        if(p!=NULL){
            cout<<"\n\t\t"<<p->data;
            pre(p->left);
            pre(p->right);
        }
    }

    void in(Node*){
        if(p!=NULL){
            in(p->left);
            cout<<"\n\t\t"<<p->data;
            in(p->right);
        }
    }

    Node*root=NULL,*p=NULL,*q=NULL,*tmp=NULL;

};


int main(){

}