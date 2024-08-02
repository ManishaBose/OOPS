/* Member of class X and friend of class Y [REMEMBER]
class X{
    .....
    .....
    int fun1();
    .....
};
class Y{
    .....
    .....
    friend int X::fun1();
    .....
}*/
#include<iostream>
using namespace std;

class abc;
class xyz{
    public:
        void membFunct(abc &);
};

class abc{
    int y;
    public:
        abc(int j):y(j){}
        friend void xyz::membFunct(abc &obj);
};

void xyz::membFunct(abc &obj){
    cout<<obj.y + 50;
}

int main(){
    xyz x;
    abc a(30);
    x.membFunct(a);
    return 0;
}