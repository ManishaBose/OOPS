#include <iostream>
using namespace std;

class A {
protected:
    int x;
public:
    A(int a1) : x(a1) {}
    virtual void f() {
        cout << "I am in A" << endl;
    }
    void fa() {
        cout << "x: " << x << endl;
    }
};

class B : public A {
protected:
    int y;
public:
    B(int a1, int b1) : A(a1), y(b1) {}
    void f() {
        cout << "I am in B" << endl;
    }
    void fb() {
        cout << "x: " << x << " y: " << y << endl;
    }
};

class C : public B {
protected:
    int z;
public:
    C(int a1, int b1, int c1) : B(a1, b1), z(c1) {}
    void f() {
        cout << "I am in C" << endl;
    }
    void fc() {
        cout << "x: " << x << " y: " << y << " z: " << z << endl;
    }
};

int main() {
    A* a;
    B b(10, 20);
    C c(30, 40, 50);

    // dynamic method dispatch
    a = &c;
    a->f();
    a->fa();
    //a->fc(); not possible
    //c->fb(); not possible

    // calling functions of B and C
    b.fb();
    c.fc();

    a=&b;
    a->f();
    //a->fc(); not possible
    
    return 0;
}