#include<iostream>
using namespace std;

class MyStack{

int *Stack;
int MaxSize;
int Top;


public:
    MyStack(int Size);
    ~MyStack();
    bool IsEmpty();
    bool IsFull();
    void push(int a);
    void pop();
    void printStack();
    void TopElement();
    void ResizeStack(int NewSize);


};

MyStack::MyStack(int Size){
MaxSize=Size;
Top=0;
Stack=new int[MaxSize];
}

MyStack::~MyStack(){
delete [] Stack;

}

bool MyStack::IsFull(){
if(Top==MaxSize){
    return true;
}
else{
    return false;
}
}

bool MyStack::IsEmpty(){
if(Top==0){

    return true;
}
else {
    return false;
}
}


void MyStack::push(int a){
if(IsFull()){
    cout<<"Stack Overflow!"<<endl;
    ResizeStack(5);
    Top++;
    Stack[Top]=a;
    cout<<"new memory allocated and "<<a<<" is pushed into the stack" <<endl;


}
else{
    Top++;
    Stack[Top]=a;
    cout<<a<<" is inserted into the stack" <<endl;

}
}


void MyStack::pop(){
    int temp;
if(IsEmpty()){

    cout<<"Stack Underflow!"<<endl;
}

else{
    temp=Stack[Top];
    Top--;
    cout<<temp<<" removed from the Stack"<<endl;
}


}

void MyStack::TopElement(){
if(IsEmpty()){
    cout<<"Empty Stack"<<endl;
}

else{
    cout<<"Top = " <<"Stack"<<"["<<Top<<"]"<<" = "<<Stack[Top]<<endl;
}

}

void MyStack::ResizeStack(int NewSize){
MaxSize=MaxSize+NewSize;
int* TempStack = new int [MaxSize];

for(int i=0; i<MaxSize; i++){
    TempStack[i]=Stack[i];

    //delete[] Stack;
    //Stack=TempStack;
}

}

void MyStack::printStack(){
if(IsEmpty()){
    cout<<"Empty Stack"<<endl;
}

else{
    cout<<"Stack elements: "<<endl;
    for(int i=Top;i>0;i--)
    {
        cout<<Stack[i]<<" ";
    }
    cout<<endl;
}

}


int main(){
MyStack M1(5);

M1.push(3);
M1.push(6);
M1.push(10);
M1.push(15);
M1.push(20);
M1.push(30);
M1.printStack();
M1.pop();
M1.printStack();



}
