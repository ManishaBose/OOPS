#include<iostream>
using namespace std;
class A{
    int a, b;
    public:
        A(const A &ob){ //Shallow copy constructor
            a = ob.a;
            b = ob.b;
        }
        A(int x, int y){ //Simple parameterized constructor
            a=x;
            b=y;
        }
        void show(){
            cout<<a<<" "<<b<<endl;
        }
};
int main(){
    A ob1(5,6);
    ob1.show();
    //A ob2(ob1);
    A ob2 = ob1;
    ob2.show();
    return 0;
}