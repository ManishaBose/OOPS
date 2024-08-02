#include<iostream>
using namespace std;
struct students{
    string name;
    int roll;
    ~students(){
        cout<<"Destructor executed"<<endl;
    }
};
int main(){
    string name;
    int roll;
    students s1; // destructor will be called implicitely
    students *s2=new students[10];
    delete []s2; // not implicitely calling... 10 times
    students *s3=new students;
    delete s2;// not implicitely
    return 0;
}