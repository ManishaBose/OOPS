#include<iostream>
using namespace std;

namespace ns{
    void fun();
    class A{
        public:
            void fun();
    };
};
void ns::fun(){
    cout<<"I am inside namespace ns."<<endl;
}
void ns::A::fun(){
    cout<<"I am inside class A."<<endl;
}

using namespace ns;
int main(){
    A ob;
    fun();
    ob.fun();
    return 0;
}