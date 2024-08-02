#include<iostream>
using namespace std;
class Person{ //base class [abstact class]
    string name;
    int age;
    public:
    Person(string,int);
    virtual void Printdetails() = 0;
};
class Employee:public Person{ //derived class
    int eid,sal;
    public:
    Employee(string,int,int,int);
    void Printdetails();
};
class Manager:public Person{ //derived class
    int Manager_id,sal;
    public:
    Manager(string,int,int,int);
    void Printdetails();
};
Person::Person(string n,int a):name(n),age(a){}
Employee::Employee(string n,int a,int id,int s):Person(n,a),eid(id),sal(s){}
Manager::Manager(string n,int a,int id,int s):Person(n,a),Manager_id(id),sal(s){}
void Person::Printdetails(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
void Employee::Printdetails(){
    Person::Printdetails();
    cout << "Employee ID: " << eid << endl;
    cout << "Salary: $"<< sal << endl;
}
void Manager::Printdetails(){
    Person::Printdetails();
    cout << "Employee ID: " << Manager_id << endl;
    cout << "Salary: $"<< sal << endl;
}
int main() {
    Employee emp("Patrick Jane", 30, 101, 30000);
    Manager mgr("Teresa Lisbon", 35, 201, 50000);
    cout << "Employee Details:" << endl;
    emp.Printdetails();
    cout<<endl;
    
    cout << "Manager Details:" << endl;
    mgr.Printdetails();
    return 0;
}

/* BY COPILOT
#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(std::string name, int age) : name(name), age(age) {}
    virtual void printDetails() = 0; // Pure virtual function makes this class Abstract
};

class Employee : public Person {
protected:
    int eid;
    int sal;
public:
    Employee(std::string name, int age, int eid, int sal) : Person(name, age), eid(eid), sal(sal) {}
    void printDetails() override {
        std::cout << "Employee Name: " << name << ", Age: " << age << ", EID: " << eid << ", Salary: " << sal << std::endl;
    }
};

class Manager : public Person {
protected:
    int manager_id;
    int sal;
public:
    Manager(std::string name, int age, int manager_id, int sal) : Person(name, age), manager_id(manager_id), sal(sal) {}
    void printDetails() override {
        std::cout << "Manager Name: " << name << ", Age: " << age << ", Manager ID: " << manager_id << ", Salary: " << sal << std::endl;
    }
};

int main() {
    Employee employee("John", 30, 1, 3000);
    Manager manager("Jane", 40, 2, 5000);

    employee.printDetails();
    manager.printDetails();

    return 0;
}
*/