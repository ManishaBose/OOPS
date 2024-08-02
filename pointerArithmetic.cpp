#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int *p=a; //int*p; p=a;
    cout<<p<<endl;//Address of a[0]
    cout<<*p<<endl;; //1
    cout<<&p<<endl;
    cout<<++p<<endl;
}