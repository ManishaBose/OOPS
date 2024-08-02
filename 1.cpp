#include<iostream>
using namespace std;
class A;
class B{
    public:
        int b;
        B(int x):b(x){}
        void show(){
            cout<<"From class B: "<<b<<endl;
        }
};
class A{
    int a;
    public:
        A(int x):a(x){}
        void show(){
            cout<<"From class A, show function: "<<a<<endl;
        }
        void showx(B &ob){
            cout<<"From class A, showx function: "<<ob.b<<endl;
        }
};
int main(){
    A ob1(5);
    B ob2(6);
    ob1.show();
    ob1.showx(ob2);
    ob2.show();
    return 0;
}