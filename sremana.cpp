#include<iostream>
using namespace std;
class Stack{
    int top,size,*arr;
    public:
    Stack();
    Stack(int);
    ~Stack();
    
    void push(int);
    int pop();
    void disp();
    void operator=(Stack &);

};
Stack::Stack(int max){
    top=-1;
    size=max;
    arr=new int[size];
}
Stack::Stack(){
    top=-1;//Stack is empty
    size=0;//default top is 10
    arr=new int[size];//Constructor create array and top is -1;stack is empty
}
Stack::~Stack(){
    delete []arr;
}
void Stack::push(int x){
    if(top==size-1){
        cout<<"Stack is Full"<<endl;
        cout<<"--------------------------"<<endl;
    }
    else{
        arr[++top]=x;
    }
}
int Stack::pop(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;

    }
    return arr[top--];
}
void Stack::disp(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl<<endl;
}
void Stack::operator=(Stack &s){
    if((top<s.top) && (size>=s.size)){ //s is s1; normal is s2
        top=s.top;
        for(int i=0;i<=top;i++){
            arr[i]=s.arr[i];
        }
    }
    else if(top<s.top && size<s.size){
        top=s.top;
        for(int i=0;i<=top;i++){
            arr[i]=s.arr[i];
        }
    }
    else if((top>s.top) && (size>=s.size)){
        top=s.top;
        for(int i=0;i<=top;i++){
            arr[i]=s.arr[i];
        }
        /*int c=top-s.top;
        for(int i=0;i<c;i++){
            pop();
        }*/
    }
    else{
        top=s.top;
        for(int i=0;i<=top;i++){
            arr[i]=s.arr[i];
        }
    }
    }

int main(){
    Stack *s1=new Stack(5);
    s1->push(1);
    s1->push(2);
    s1->push(3);
    cout<<"Elements is stack 1:"<<endl;
    s1->disp();
    //Creating 2nd object for stack
    Stack s2(7);
    s2.push(10);
    s2.push(20);
    s2.push(30);
    s2.push(40);
    cout<<"Stack s2 before copying s1"<<endl;
    s2.disp();
    s2=*s1;
    cout<<"Stack s2 after copying s1"<<endl;
    s2.disp();
    delete s1;
    s2.disp(); //Garbage value
    return 0;

}