#include<iostream>
using namespace std;
class Employee;
class Manager;
class Person{
    string name;
    int age;
    public:
    Person(string,int);
    virtual void Printdetails()=0;
    friend class Employee;
    friend class Manager;
};
Person::Person(string n,int a){
    name=n;
    age=a;
}
class Employee:public Person{
    int eid,sal;
    public:
    Employee(string,int,int,int);
    void Printdetails();
};
void Employee::Printdetails(){
    cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << eid << endl;
        cout << "Salary:Rs"<< sal << endl;
    }
class Manager:public Person{
    int Manager_id,sal;
    public:
    Manager(string,int,int,int);
    void Printdetails();
};
void Manager::Printdetails(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Employee ID: " << Manager_id << endl;
    cout << "Salary:Rs"<< sal << endl;
}
Employee::Employee(string n,int a,int id,int s):Person(n,a),eid(id),sal(s){}
Manager::Manager(string n,int a,int id,int s):Person(n,a),Manager_id(id),sal(s){}
int main() {
    Employee emp("A", 20, 101, 700);
    Manager mgr("J", 30, 201, 550);
    cout << "Employee Details:" << endl;
    emp.Printdetails();
    cout << "Manager Details:" << endl;
    mgr.Printdetails();
    return 0;
}