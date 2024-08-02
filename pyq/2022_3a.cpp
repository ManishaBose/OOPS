/*
(i) int *a = new int(5);

This line of code is allocating memory for a single integer on the heap and initializing it 
with the value 5. a is a pointer to this newly allocated integer.

(ii) int *y = new int[5];

This line of code is allocating memory for an array of 5 integers on the heap. y is a pointer to
 the first element of this array. The elements of the array are not initialized, so their values
  are undefined until you assign them.


*/
#include<iostream>
using namespace std;

int main(){
    int *a = new int(5);
    cout<<*a<<endl;
    int *y =  new int[5];
    cout<<y<<endl<<y[0]<<endl<<y[2];
    return 0;
}