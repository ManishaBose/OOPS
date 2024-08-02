//In case of multiple inheritance, if there is a function with the same name 
//in both base classes, the derived class can handle this ambiguity by using the scope
//resolution operator :: to specify which base class's function it wants to call.

#include<iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        A(int a1):a(a1){}
        void show(){
            cout<<"Show from A "<<a<<endl;
        }
};
class B{
    protected:
        int b;
    public:
        B(int b1):b(b1){}
        void show(){
            cout<<"Show from B "<<b<<endl;
        }
};
class C: public A, public B{
    int c;
    public:
        C(int x,int y,int z):A(x),B(y), c(z){}
        void show(){ 
            cout<<"Show from C: "<<a<<" "<<b<<" "<<c<<endl;
            A::show();
            B::show();
        }
};

int main(){
    C c(1,2,3);
    c.show(); //Calls show of class C
    c.A::show(); //Calls show of class A
    c.B::show(); //Calls show of class B
}