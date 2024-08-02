#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A (int a){
        this->a = a;
        cout<<"A constructor called"<<endl;
        cout<<"a = "<<a<<endl;
    }
};
int main(){
    A obj(5);
    A(100);
    return 0;
}