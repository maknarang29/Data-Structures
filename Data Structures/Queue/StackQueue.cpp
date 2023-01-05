#include <iostream>
#include <stack>
using namespace std;




class StackQueue{
private:   
    stack<int> s1;
    stack<int> s2;
    void s1tos2(){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        };
    }
    void s2tos1(){
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        };
    }

public:



//Function to push an element in queue by using 2 stacks.
void push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int pop()
{   
    s1tos2();
    int elem = s2.top();
    s2.pop();
    s2tos1();
    return elem;
};
int peek(){
    s1tos2();
    int elem = s2.top();
    s2tos1();
    return elem;
};
bool empty() {
    if (s1.empty() && s2.empty()) return true;
    else return false;
};
};

int main(){
    StackQueue *sq = new StackQueue();
    sq->push(1);
    sq->push(2);
    cout<<sq->peek()<<endl;
    sq->push(3);
    cout<<sq->peek()<<endl;
}