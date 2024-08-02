//Write a C++ program to add 2 data members belongs to 2 different class using
//friend function.

#include<iostream>
using namespace std;

class Complex{
    int r,i;
    public:
        Complex(int, int);
        void show();
        friend Complex operator+(Complex &, Complex &);
};
Complex::Complex(int r1, int i1):r(r1),i(i1){}
void Complex::show(){
    cout<<r<<" + "<<i<<"i"<<endl;
}
Complex operator+(Complex &c1, Complex &c2){
    return Complex (c1.r+c2.r, c1.i+c2.i); //I think nameless
}

int main(){
    Complex c1(20,5);
    Complex c2(-12,3);
    cout<<"First complex number ";
    c1.show();
    cout<<"Second complex number: ";
    c2.show();
    Complex c3(0,0);
    c3=c1+c2;
    cout<<"Sum: ";
    c3.show();
}