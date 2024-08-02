#include<iostream>
using namespace std;

class A:public exception{ //Declare class to throw object
    public:
        const char* what() const throw(){
            return "Array index out of bound error.";
        }
};
int main(){
    A ob;
    int a[10], i, idx;
    for(int i =0;i<10;i++){
        cout<<"Insert the value for "<<i<<" location"<<endl;
        cin>>a[i];
    }
    try{
        cout<<"Enter the location of array to read"<<endl;
        cin>>idx;
        if(idx<0 || idx>10)
            throw ob;
    }
    catch(A &ob){
        cout<<ob.what()<<endl;
    }
    cout<<"Program terminated."<<endl;
    return 0;
}