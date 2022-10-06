#include<iostream>
#include<stdlib.h>
using namespace std;

template <typename type>
class List{
struct Node
{
    type data;
    Node*next;
    /* data */
};
Node*begin=NULL;
public:
void traverse(){
    Node*ptr=new Node;
    ptr=begin;
    if (begin==NULL)
    {
        cout<<"linked list is empty"<<endl;
        /* code */
    }
else{
    while (ptr!=NULL)
    {
        cout<<" | "<<ptr->data<<" | ";
        ptr=ptr->next;

        /* code */
    }
    
}
    
}



void insertbeg(type input){
    Node*tmp=new Node;
    tmp->data=input;
    tmp->next=NULL;
    if (begin!=NULL)
    
        tmp->next=begin;
        begin=tmp;

        /* code */
    
    
}

void insertend(type input){
    Node* tmp=new Node;
    Node* ptr=begin;
    tmp->data=input;
    tmp->next=NULL;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
        /* code */
    }
    ptr->next=tmp;
    
    

}

void search(type val){
Node* ptr=begin;
int flag=0;



    while (ptr!=NULL)
    {
        if (ptr->data==val)
        {
            cout<<"element found at the index position "<<ptr<<endl;
            flag=1;
            /* code */
        }
        ptr=ptr->next;
        
        /* code */
    
    if (flag==0)
    {
        cout<<"element not found in this linked list"<<endl;
        /* code */
    }
    1
    
    
}

}

};

int main(){

    List<int>obj;
    int val,ch;
    while (true)
    {
        cout << "\n\nLinked List (1. insertBeg 2.insertEnd 3.search 4.exit) : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        cout<<"enter the integer"<<endl;
        cin>>val;
            obj.insertbeg(val);
            break;
        case 2:
        cout<<"enter the integer"<<endl;
        cin>>val;
            obj.insertend(val);
            break;
         case 3:
        cout<<"enter the integer"<<endl;
        cin>>val;
            obj.search(val);
            break;
        
        default:
            break;
        }

        /* code */
    obj.traverse();
    }
    

}