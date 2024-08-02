//Create a class, which keeps track of the member of its instances. Use static data
//member, constructor and destructor to maintain updated information about
//active objects.

#include<iostream>
using namespace std;

class student{
    string name;
    int roll;
    static int count; //static data member

    public:
    student();
    ~student();
    static int getCount(); //static method
    void display();
};

student::student(){
    cout<<"Enter the name of student: ";
    cin.ignore();
    getline(cin, name);
    cout<<"Enter the roll of student: ";
    cin>>roll;
    count++;
    cout<<"Total objects: "<<count<<endl;
}

student::~student(){ //Object destroyed in reverse order of creation: s3>s2>s1
    cout<<"Object destroyed. Total objects: "<<--count<<endl;
}

int student::getCount(){
    return count;
}

void student::display(){
    cout<<"Name: "<<name<<" Roll: "<<roll<<endl;
}

int student::count = 0; //compulsory definition outside class

int main(){
    student s1;
    s1.display();
    student s2;
    s2.display();
    student s3;
    s3.display();
    cout<<"Total objects: "<<student::getCount()<<endl;
    return 0;
}