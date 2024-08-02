#include<iostream>
using namespace std;
struct students{
    string name;
    int roll;
    students(){ //you have make default constructor if you use parameterized constructor
        name='\0';
        roll=-1;
    }
    students(string n, int r){
        name=n;
        roll=r;
    }
    void display(){
        cout<<name<<" "<<roll<<endl;
    }
};
int main(){
    string n1;
    int r1;
    students *s=new students[10]; //non-parameterize/default constructor called
    for(int i=0;i<10;i++)
        s[i].display(); //print the values initialized using non-parameterized constructor
    for(int i=0;i<10;i++)
        s[i]=students("Manisha",170); //calling parameterized constructor
    for(int i=0;i<10;i++)
        s[i].display();
}