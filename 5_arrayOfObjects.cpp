#include<iostream>
using namespace std;
struct students{
    string name;
    int roll;
    students(){
        cout<<"Enter name: ";
        getline(cin, name);
        cout<<"Enter roll: ";
        cin>>roll;
        cin.ignore(); //Put it at last if you don't want the first letter to be ignored
    }
    void display(){
        cout<<name <<" "<<roll<<endl;
    }
};
int main(){
    students *s=new students[3]; //no need for non-parameterized constructor but if there it is called during object creation
    for(int i=0;i<3;i++){
        s[i].display(); //function call
    }
    return 0;
}