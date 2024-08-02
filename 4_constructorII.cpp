#include<iostream>
using namespace std;
struct students{
    string name;
    int roll;
    students(string n, int r){
        name=n;
        roll=r;
    }
};
int main(){
    //students s1; ERROR
    students s1("XYZ",1);
    //students *s2 = new students; ERROR
    students *s2 = new students("Manisha Bose", 170);
    cout<<s2->name<<" "<<s2->roll;
}