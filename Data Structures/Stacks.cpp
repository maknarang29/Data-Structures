#include <iostream>
using namespace std;

#define MAX 1000 //Defining MAX size

class Stack{
    int top;

    public:
    int a[MAX];

    Stack() {top = -1; }
    bool push(int x);
    bool isEmpty();
    int pop();
    int peek();
};

bool Stack::push(int x){
    if (top >= MAX - 1){
        cout<<"Stack Overflow";
        return false;
    }
    else{
        a[++top] = x;
        cout<<"pushed into stack "<<x<<endl;
        return true;
    }
};
bool Stack::isEmpty(){
    return top<0;
};
int Stack::pop(){
    if (top<0){
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}


//Stack using Linked Lists
class StackNode{
    public:
    int data;
    StackNode* next;
};


int main()
{
    class Stack s;
    s.push(10);
    s.push(20); 
    s.push(30); 
    cout<<s.pop()<< " Popped from stack"<<endl;
    cout<<"Top element is :"<<s.peek()<<endl;
    cout <<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        cout << s.peek() <<" ";
        s.pop();
    }
  
    return 0;
    
}

