#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main (){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    swap(a,b);
    cout<<"Numbers have been swapped."<<endl;
    cout<<"First number is: "<<a<<endl;
    cout<<"Second number is: "<<b<<endl;
}