#include<iostream>
using namespace std;

template<class t1, class t2>
class A{
    t1 a;
    t2 b;
    public:
        A(t1,t2);
        void show();
};
template<class t1, class t2>
A<t1,t2>::A(t1 x, t2 y){
    a=x;
    b=y;
}
template<class t1, class t2>
void A<t1, t2>::show(){
    cout<<a<<" "<<b;
}
int main(){
    A<int, float> ob(2,6.7);
    ob.show();
    return 0;
}