#include<iostream>
using namespace std;

long fact (int);

long fact(int a){
    long ans=1;
    for(int i=1;i<=a;i++)
        ans*=i;
    return ans;
}
class A:public exception{
    public:
        const char* what() const throw() {
            return "Negative number";
        }
};
class B:public exception{
    public:
        const char* what() const throw(){
            return "Entered number greater than 20";
        }
};

int main(){
    A ob1;
    B ob2;
    int x;
    cout<<"Enter the value to find factorial: ";
    cin>>x;
    try{
        if(x<0)
            throw ob1;
        else if(x>20)
            throw ob2;
        else
            cout<<fact(x)<<endl;
    }
    catch(A &ob){
        cout<<ob.what()<<endl;
    }
    catch(B &ob){
        cout<<ob.what()<<endl;
    }
    cout<<"Program terminated."<<endl;
    return 0;
}