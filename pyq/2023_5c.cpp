#include<iostream>
using namespace std;

class A{
    int x;
    static int y; //static data member
    public:
        A(int);
        void show();
        static void disp(); //static function
};
int A::y=50; // defining a static data member

A::A(int x1):x(x1){}

void A::show(){
    cout<<x<<" "<<y<<endl;
}

void A::disp(){
    cout<<y<<endl;
}

int main(){
    A a(10);
    a.show();
    A::disp();
}


