#include<iostream>
using namespace std;

#define n 100

class Stack{
    int * arr;
    int top;


    Stack(){
    arr=new int[n];
    top=-1;   
    }

    void push(int x){
        if(top=n-1){
            cout<<"not enough space"<<endl;
        return;
        }
        top++;
        arr[top]=x;

    }
    void pop (){
        if(top==-1){

            cout<<"undeflow"<<endl;
return;
        }   
    top--;
    }



int peek(){
    if(top==-1){

            cout<<"undeflow"<<endl;
            return -1;
        } 
return arr[top];


        
}

bool isemp(){
     if(top==-1){

            cout<<"undeflow"<<endl;
            return false;
        } 
}

};




int main(){}