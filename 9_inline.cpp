#include<iostream>
using namespace std;
inline int add(int x, int y) //inline function: the compiler may decide to replace the call with the actual code of the function
{
    return x+y;
}
int subtract(int x, int y)  //normal function: standard function call mechanism is employed, involving pushing parameters onto the stack, jumping to the function code, and returning from the function
{
    return abs(x-y);
}
int main(){
    cout<<add(10,20)<<endl;
    cout<<subtract(10,20);
}