#include<iostream>
using namespace std;

void func (int a){
    cout<<a*10;
}

int main(){
    void (*funcPtr) (int);
    funcPtr = func;
    funcPtr(170);
    return 0;
}