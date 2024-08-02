#include<iostream>
#include<string> //for getline`
using namespace std;
struct Student{
    int roll;
    string name;
};
int main(){
    Student s1;
    getline(cin,s1.name);
    cin>>s1.roll;
    cout<<s1.name<<"    "<<s1.roll<<endl;
    Student s2;
    cin.ignore();
    getline(cin,s2.name);
    cin>>s2.roll;
    cout<<s2.name<<"    "<<s2.roll;
}