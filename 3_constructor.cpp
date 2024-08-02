#include<iostream>
using namespace std;
struct students{
    string name;
    int roll;
    /*students(string n,int r){      [Parameterized Constructor]
        name=n;
        roll=r;
    }*/
    students(){
        name="Manisha Bose";
        roll=170;
    }
};
int main(){
    //students s1("Manisha Bose", 170);   [object creation for parameterized constructor]
    students s1; //Non-parameterized constructor
    cout<<"Printing obj 1"<<endl;
    cout<<s1.name<<" "<<s1.roll<<endl;
    students *s2=new students; //Dynamic object creation and call of non-parameterized constructor
    //students *s2=new students(); //Can be done like this as well
    cout<<"Printing obj 2"<<endl;
    cout<<s2->name<<"  "<<s2->roll;
    return 0;
}