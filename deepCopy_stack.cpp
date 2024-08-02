#include<iostream>
using namespace std;
class stack{
    int *arr, top, size;
    public:
    stack(int);
    ~stack();
    stack(stack &);
    void push(int);
    int pop();
    void disp();
};
stack::stack(int x){
    top = -1;
    size = x;
    arr = new int[size];
}
stack::stack(stack &ob){
    top = ob.top;
    size = ob.size;
    arr = new int[size];
    for(int i = 0; i<=top; i++){
        arr[i] = ob.arr[i];
    }
}
stack::~stack(){
    delete []arr;
}
void stack::push(int x){
    if(top == size-1){
        cout<<"Stack is full"<<endl;
    }
    else
        arr[++top] = x;
}
int stack::pop(){
    if(top == -1){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else
        return arr[top--];
}
void stack::disp(){
        for(int i = 0; i<=top && top!=-1; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}
int main(){
    stack *s1 = new stack(5);
    s1->push(1);
    s1->push(2);
    s1->push(3);
    stack s2(*s1);
    s2.disp(); //1 2 3
    s2.push(4);
    s1->disp(); //1 2 3 because local top is not updated; it is still 2 
    s2.disp(); //1 2 3 4
    delete s1;
    s2.disp(); //no more segmentation fault because of deep copy; 1 2 3 4
    return 0;
}