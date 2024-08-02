#include <iostream>
using namespace std;

class Student {
    public:
    static int count;
public:
    Student() {
        std::cout << "Constructor called" << std::endl;
    }

    ~Student() {
        std::cout << "Destructor called" << std::endl;
        cout<<count++;
    }
};
int Student::count=0;

int main() {
    Student s[30];
    // The constructor of the Student class is called 30 times here
    Student();
    // Some code here
    // The destructor of the Student class is called 30 times here
    return 0;
}