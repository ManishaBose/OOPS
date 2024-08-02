//Single level inheritance with protected data members
#include<iostream>
using namespace std;
class A{
    protected:
        int a;
    public:
        A(int);
        void show();
};
class B:public A{
    protected:
        int b;
    public:
        B(int, int);
        void show();
};
class C:public B{
    int c;
    public:
        C(int, int, int);
        void show();
};
A::A(int a1):a(a1){}
void A::show(){
    cout<<a<<endl;
}
B::B(int a1, int b1):A(a1),b(b1){}
void B::show(){
    cout<<a<<" "<<b<<endl;
}
C::C(int a1, int b1,int c1):B(a1,b1),c(c1){}
void C::show(){
    B::show(); //1 2
    cout<<a<<" "<<b<<" "<<c<<endl; //1 2 3
}
int main(){
    C objc(1,2,3);
    objc.show();
    objc.A::show(); //1
    objc.B::show(); //1 2
    return 0;
}