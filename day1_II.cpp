//Default constructor, parameterized costructor, show() function, 
//array of objects initialized using parameterized constructor, input() function, destructor
#include<iostream>
#include<string>
using namespace std;
struct Student{
    int roll;
    string name;
    Student(){
        roll=-1;
        name='\0';
    }
    // Student(string n, int r){
    //     name=n;
    //     roll=r;
    // }
    ~Student(){
        cout<<"Object destroyed"<<endl;
    }
    void input(int i){
        cout<<"Enter the details of Student "<<i<<endl;
        cout<<"Enter name of Student: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter roll of Student: ";
        cin>>roll;
    }
    void display(int i){
        cout<<"Details of Student "<<i<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};
int main(){
    //Student *st= new Student();
    int noOfStudents;
    cout<<"Enter the number of Students: ";
    cin>>noOfStudents;
    //Input from main() and passing as constructor argument
    if(noOfStudents>0){
        Student *s = new Student[noOfStudents];
        for(int i=0;i<noOfStudents;i++){
            s[i].input(i+1);
        }
        for(int i=0;i<noOfStudents;i++){
            s[i].display(i+1);
        }
        delete []s;
    }
    else
    cout<<"Invalid Student Number."<<endl;
}