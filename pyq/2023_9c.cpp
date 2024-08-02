#include<iostream>
using namespace std;

template <typename T>
T maxNo(T x, T y){
    if(x>y)
        return x;
    else
        return y;
}
int main(){
    cout<<maxNo<float>(45.32, 58.23);
}