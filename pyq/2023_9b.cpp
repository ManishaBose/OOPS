#include<iostream>
using namespace std;

template<typename T>
T mymax(T x, T y){
    if(x>y)
        return x;
    else
        return y;
}
template<typename T>
T mymax(T x, T y, T z){
    T max = x;
    if(y>max)
        max=y;
    if(z>max)
        max=z;
    return max;
}

int main(){
    cout<<mymax<int>(9,10)<<endl;
    cout<<mymax<float>(4.3, 2.9, 23.5)<<endl;
    return 0;
}