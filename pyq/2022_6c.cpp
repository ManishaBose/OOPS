#include<iostream>
using namespace std;

class A{
    protected:
        int x;
    public:
        A(int a1):x (a1){}
        virtual void show() = 0;
};
class B:public A{
    protected:
        int y;
    public:
        B(int a1, int b1):A(a1),y(b1){}
        void show(){
            cout<<"Inside class B"<<endl;
            cout<<x<<" "<<y;
        }
};
class C:public B{
    protected:
        int z;
    public:
        C(int a,int b, int c):B(a,b), z(c){}
        void show(){
            cout<<"Inside class C"<<endl;
            cout<<x<<" "<<y<<" "<<z;
        }
};
int main(){
    B b(1,2);
    C c(4,5,6);
    A *ptr = & c;
    ptr->show();
}