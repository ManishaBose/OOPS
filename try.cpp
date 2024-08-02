#include<iostream>
using namespace std;
class Stack{
    int top,size,*arr;
    public:
    Stack();
    Stack(int);
    void disp();
    };
Stack::Stack(){
    top=-1;//Stack is empty
    size=0;//default size is 0
    arr=new int[size];//Constructor create array and top is -1;stack is empty
    cout<<"When the fuck does this work?"<<endl;
}
Stack::Stack(int max){
    top=-1;
    size=max;
    arr=new int[size];
}
void Stack::disp(){
    cout<<"Starting to print"<<endl;
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl<<endl;
    cout<<"What to print?";
}

int main(){
    Stack *s=new Stack(10);
    s->disp();
}