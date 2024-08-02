#include<iostream>
using namespace std;

int main(){
    int num1 = 50, num2=0;
    char ch = 'A';
    try{
        if(num2 == 0)
            throw 1;
        if(ch<97 || ch>122)
            throw 2; 
    }
    catch(...){
        cout<<"Exception caught."<<endl;
    }
    cout<<"Program terminated."<<endl;
    return 0;
}