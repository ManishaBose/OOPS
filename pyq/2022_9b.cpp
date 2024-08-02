#include<iostream>
using namespace std;

class OutOfRange:public exception{
    string msg;
    public:
        OutOfRange(int val){
            msg = "Your input " + to_string(val)+" is out of range.";
        }
        const char* what() const throw(){
            return msg.c_str(); //Convert string to character array.
        }
};

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try{
        if(age<18 || age>60)
            throw OutOfRange(age);
        else
            cout<<"Age is "<<age<<endl;
    }
    catch(OutOfRange& ob){
        cout<<ob.what()<<endl;
    }
    return 0;
}