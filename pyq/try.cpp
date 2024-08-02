#include<iostream>
using namespace std;
inline int add(int a, int b){
    return a+b;
}
int main() {
    int a,b;
    cout<<"Enter 2 numbers";
    cin>>a>>b;
    cout<<add(a,b);
    return 0; 
}