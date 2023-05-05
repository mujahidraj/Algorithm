#include<bits/stdc++.h>
using namespace std;
// stack using static array

int *a;
int n;
int top=-1;

int isEmpty(){
    return top==-1?1:0;
}

int isFull(){
    return top>=n-1?1:0;
}

void push(int value){
    if(!isFull()) a[++top]=value;
    else cout<<"Full"<<endl;
}
void pop(){
    if(!isEmpty()) top--;
    else cout<<"Empty"<<endl;
}

int topElement(){
    return a[top];
}

void display(){
    for(int i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    n=5;
    a = new int[n];
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    display();

return 0;
}
