//Default constructor, parameterized costructor, show() function, pointer object, 
//normal object, input() function, destructor
//Default constructor, parameterized costructor, show() function, 
//array of objects initialized using parameterized constructor, input() function, destructor

#include<iostream>
#include<string>
using namespace std;
struct Student{
    string name;
    int roll;
    static int studentCount;
    Student(){
        name='\0';
        roll=-1;
    }
    Student(string n, int r){
        name=n;
        roll=r;
    }
    ~Student(){ //Destructor
        cout<<"Object destroyed"<<endl;
    }
    void input(){
        cout<<"Enter the details of Student "<<++studentCount<<endl;
        cout<<"Enter name of Student: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter roll of Student: ";
        cin>>roll;
    }
    void show_details(){
        cout<<"Details of Student "<<++studentCount<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};
int Student::studentCount=0;
int main(){
    int noOfStudents;
    cout<<"Enter the number of Students: ";
    cin>>noOfStudents;
    if(noOfStudents>0){
        int r1;
        string n1;
        Student::studentCount = 1;
        cout<<"Enter the details of Student "<<Student::studentCount<<endl;
        cout<<"Enter name of Student: ";
        cin.ignore();
        getline(cin,n1);
        cout<<"Enter roll of Student: ";
        cin>>r1;
        Student sp(n1,r1);//Creating object at compile-time with parameterized constructor
        noOfStudents--;
        Student *s = new Student[noOfStudents];//Creating array of objects at run-time with default constructor
        for(int i=0;i<noOfStudents;i++){
            s[i].input();
        }
        Student::studentCount=0;
        sp.show_details();
        for(int i=0;i<noOfStudents;i++){
            s[i].show_details();
        }
        delete []s;
    }
    else
    cout<<"Invalid Student Number."<<endl;
}