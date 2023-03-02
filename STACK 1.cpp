#include<iostream>
#define MAX 5

using namespace std;


int STACK[MAX],TOP;

//stack initialization
void initStack(){
    TOP=0;
}
//check it is empty or not
int isEmpty(){
    if(TOP==0)
        return 1;
    else
        return 0;
}

//check stack is full or not
int isFull(){
    if(TOP==MAX)
        return 1;
    else
        return 0;
}

void push(int num){
    if(isFull()){
        cout<<"Stack is full!!!"<<endl;
        return;
    }
    STACK[TOP++]=num;
    cout<<num<<" pushed."<<endl;
}

void display(){
    int i;
    if(isEmpty()){
        cout<<"Stack is empty!!!"<<endl;
        return;
    }
    for(i=TOP-1;i>=0;i--){
        cout<<STACK[i]<<" ";
    }
    cout<<endl;
}

//pop - to remove item
void pop(){
    int temp;
    if(isEmpty()){
        cout<<"Stack is empty!!!"<<endl;
        return;
    }

    temp=STACK[TOP-1];
    TOP--;
    cout<<temp<<" popped."<<endl;
}
int main(){
    int num;
    initStack();
    push(2);
    display();
    push(1);
    push(4);
    push(5);
    push(6);
    display();
    push(7);//it will not be pushed as stack size is 5, the stack is already full
    pop();
    display();
    return 0;
}
