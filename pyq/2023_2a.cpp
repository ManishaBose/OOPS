#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a=b;
    b=temp;
}

int main(){
    int a,b;
    cout<<"Enter 2 numbers";
    cin>>a>>b;
    swap(a,b);
    cout<<"The numbers have been swapped:";
    cout<<a<<" "<<b;
    return 0;
}