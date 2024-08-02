//To define a method outside of a class using a class 
//template, you need to use the template parameters in the 
//definition.

#include<iostream>
using namespace std;

template <typename T>
class A{
    T a;
    public:
        A(T);
        void func();
};
template<typename T>
A<T>::A(T x):a(x){}

template<typename T>
void A<T>::func(){
    cout<<a;
}

int main(){
    A<int> a(20);
    a.func();
    return 0;
}