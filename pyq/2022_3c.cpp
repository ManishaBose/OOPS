/*
switch...case only works with discrete integer (including char), enum, and enum
 class values. It can't handle ranges or conditions that aren't based on equality. 
 For example, you can't convert the following if...else if...else structure into a
  switch...case:
  if (x < 0) {
    cout << "x is negative";
} else if (x > 0) {
    cout << "x is positive";
} else {
    cout << "x is zero";
}
*/
/*
int x = 2;

if (x == 0) {
    cout << "x is 0";
} else if (x == 1) {
    cout << "x is 1";
} else {
    cout << "x is neither 0 nor 1";
}
*/
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    switch(a){
        case 0:
            cout<<"a is 0";
            break;
        case 1:
            cout<<"a is 1";
            break;
        default:
            cout<<"a is neither 0 nor 1"; 
    }
    return 0;
}