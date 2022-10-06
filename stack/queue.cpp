#include<iostream>
using namespace std;
#define n 100
template<typename type>

class Queue{
public:
type * arr;
type front;
type back;

Queue(){
    arr=new int[n];
    front=-1;
    back=-1;
}

void Enque(type x){
if (back=n-1)
{
    cout<<'not enough space to enter';
    /* code */
}
else{  
    back++;
    arr[back]=x;
    if (front==-1)
    {
        top++;   
    }   
}
}

void Deque(){
    if (front==-1 || front>back)
    {
        cout<<"nothing everything is empty";
        /* code */
    return;
    }
    else{
        front ++;
    }
    
}

void peek(){
    if (front==-1 || front>back)
    {
        cout<<"nothing everything is empty";
        /* code */
    return;
    }

    else{
        cout<<arr[front]<<endl;
    }
}

};



int main(){

}