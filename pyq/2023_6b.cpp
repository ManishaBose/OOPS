#include<iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        A(int a1): a(a1){}
        virtual void show() = 0;
};
class B:public A{
    protected:
        int b;
    public:
        B(int a1, int b1):A(a1), b(b1){}
        virtual void show() = 0;
};
class C:public B{
    int c;
    public:
        C(int x, int y, int z):B(x,y),c(z){}
        void show(){
            cout<<a<<b<<c;
        }
};

int main(){
    C obj(2,3,4);
    obj.show();
    return 0;
}