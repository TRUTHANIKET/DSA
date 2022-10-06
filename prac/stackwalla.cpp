#include<iostream>
using namespace std;


#define n 100
template <typename type>

class Stack{
public:
type *arr;
type top;

Stack(){
    arr=new int[n];
    top=-1;

}

void push(int x){
    if(top ==n-1){
        cout<<"stack is full not enough space"<<endl;
    }
    else{
        top++;
        arr[top]=x;

    }

}

void pop(){
     if(top ==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        top--;
    }
}

void peek(){
       if(top ==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<arr[top]<<endl;
    }
}


};


int main(){

}