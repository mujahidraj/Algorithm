#include<bits/stdc++.h>
using namespace std;
// stack using static array

template<typename T>

class Stack{
private:
    T *a;
    int n;
    int top;
public:
    Stack(){
        n=5;
        a=new T[n];
        top=-1;
    }
    Stack(int n){
        this->n=n;
        a=new T[n];
        top=-1;
    }
    int isEmpty(){
        return top==-1?1:0;
    }

    int isFull(){
        return top>=n-1?1:0;
    }

    void push(T value){
        if(!isFull()) a[++top]=value;
        else cout<<"Full"<<endl;
    }
    void pop(){
        if(!isEmpty()) top--;
        else cout<<"Empty"<<endl;
    }

    T topElement(){
        return a[top];
    }

    void display(){
        for(int i=0;i<=top;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

};


int main(){

   Stack<int> s(2);
    s.push(100);
    s.push(200);
    s.display();

return 0;
}
