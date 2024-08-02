#include<iostream>
using namespace std;

class Student{
    protected: int r;
    public:
        Student(int r1):r(r1){}
        void show(){
            cout<<"Roll:"<<r;
        }
};
class Marks: virtual public Student{
    protected: int m1, m2;
    public:
        Marks(int a, int b, int c): Student(a),m1(b),m2(c){}
        void show(){
            cout<<m1<<m2;
        }
};
class Activity: virtual public Student{
    protected: int a;
    public:
        Activity(int x, int y): Student(x), a(y){}
        void show(){
            cout<<a;
        }
};
class Result: public Marks, public Activity{
    public:
        Result(int a, int b, int c, int d): Student(a), Marks(a,b,c), Activity(a, d){} 
};

int main(){
    Student s(170);
    s.show();
    Marks m(170, 98, 56);
    m.show();
    Activity a(170, 89);
    a.show();
    return 0;
}