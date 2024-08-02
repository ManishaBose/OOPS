#include<iostream>
using namespace std;
class Stack{
    int top, size, *arr;
    public:
        Stack();
        ~Stack();
        Stack(int);
        Stack(Stack &); //Copy constructor declaration
        void push();
        void pop();
        void display();
};
Stack :: Stack(){
    top=-1;
    size=0;
    arr=new int [size];
}
Stack :: Stack(int max){
    top =-1;
    size=max;
    arr=new int [size];
}
Stack :: Stack(Stack &s){ //Copy Constructor
    top=s.top;
    size=s.size;
    arr=new int [size];
    for(int i=0;i<=top;i++)
        arr[i]=s.arr[i];
    cout<<"Copy constructor created!"<<endl;
}
void Stack::push(){
    if(top<size-1){
        int x;
        cout<<"Enter the number to push: ";
        cin>>x;
        arr[++top]=x;
    }
    else
        cout<<"Stack is full."<<endl;
}
void Stack::pop(){
    cout<<"Top element "<<arr[top--]<<"is deleted.";
}
void Stack::display(){
    for(int i=0;i<=top;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
Stack :: ~Stack(){
    delete []arr;
    cout<<"Array deleted"<<endl;
}

int main(){
    char c='Y';
    Stack *s1 = new Stack(10);
    while(c=='Y'){
        cout<<"Do you want to push(Y or N): ";
        cin>>c;
        if(c=='Y')
        s1->push();
    }
    Stack s2(*s1);
    cout<<"Displaying elements in array of object 1:"<<endl;
    s2.display();
    cout<<"To push in array of object 2:"<<endl;
    s2.push();
    cout<<"To push in array of object 1:"<<endl;
    s1->push();
    cout<<"Displaying elements in array of object 2:"<<endl;
    s2.display();
    cout<<"Displaying elements in array of object 1:"<<endl;
    s1->display();
    delete (s1);
    cout<<"Displaying elements in array of object 2 after deleting object 1:"<<endl;
    s2.display();
}