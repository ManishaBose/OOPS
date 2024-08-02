#include<iostream>
#include<string>
using namespace std;
struct Student{
    int roll;
    string name;
    Student(){
        name='\0';
        roll=-1;
    }
    void input(int i){
        cout<<"Enter details of Student "<<i<<endl;
        cout<<"Enter Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Roll: ";
        cin>>roll;
    }
    void display(int i){
        cout<<"Student "<<i<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};
int main(){
    int numberOfStudents;
    cout<<"Enter no of student: ";
    cin>>numberOfStudents;
    int i=1;
    if(i<=numberOfStudents){
        Student *st = new Student();
        st->input(i);

        st->display(i);
        i++;
    }
    else
    cout<<"Invalid student number."<<endl;
    
}