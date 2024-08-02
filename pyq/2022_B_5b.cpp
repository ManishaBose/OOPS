#include<iostream>
using namespace std;

class employee{
    string name;
    public:
        int salary;
        employee(string, int);
        void show();
        friend void enhance(employee&, int);
};
class manager{
    string name;
    int salary;
    public:
        manager(string, int);
        void show();
        void enhance(employee&, int);
};

employee::employee(string n, int s):name(n),salary(s){}
void employee::show(){
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
}
manager::manager(string n, int s):name(n),salary(s){}
void manager::show(){
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
}
void manager::enhance(employee &ob, int x){
    ob.salary+=x; //?
}
int main(){
    employee e1("Josh",2000);
    employee e2("Cameron",2304);
    manager m("Foreman",5000);
    m.show();
    m.enhance(e1, 500);
    m.enhance(e2,1000);
    e1.show();
    e2.show();
    return 0;
}
