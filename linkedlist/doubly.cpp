#include<iostream>
using namespace std;

template<typename type>
class doubley{
    struct Node
    {
        type data;
        Node * next;
        Node* prev;

        /* data */
    };
    Node * begin=NULL;
    Node * end= NULL;
    public:
    void insertbeg(type input){
        Node * tmp=new Node;
        tmp->next=NULL;
        tmp->prev=NUll;
        tmp->data=input;
        if (begin!=NULL)
        {
            tmp->next=begin;
            begin->prev=tmp;
            /* code */
        }
        else{
            end=tmp;
            begin=tmp;
        }
        

    }

    void insertend(type input){
        Node * tmp=new Node;
        tmp->data=input;
        tmp->next=NULL;
        tmp->prev=NULL;
        if (end!=NULL)
        {
         end->next=tmp;
         end->prev=tmp;
            /* code */
        }
        
    }

    void traverse(){
        if (begin==NULL)
        {
            cout<<"link list is empty"
            /* code */
        }
        else{
            Node* ptr=begin;
            while (ptr!=NULL){
                cout<<ptr->data;
                ptr=ptr->next;

            }

            {
                /* code */
            }
            
        }




        
    }




    void traversend(){
        if (end==NULL)

        {
            cout<<"linked list is empty"<<endl;
            /* code */
        }
        else{
            Node*ptr=end;
            while(ptr!=NULL){

                ptr=ptr->prev;
            }
        }
        
    }
    
};

int main(){
    doubley<int>obj;
    int input,ch;
    while(true){
        cin>>ch;
       
        obj.traversend();
    }
}