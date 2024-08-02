#include <iostream>
using namespace std;

class MyException : public exception {
public:
    const char* what() const throw() {
        return "Input number is negative;";
    }
};

int main() {
    MyException ob;
    int a, b;
    try{
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        if (a < 0 || b < 0) {
            throw ob;
        }
        double average = (a + b) / 2.0;
        cout << "Average: " << average <<endl;
    } 
    catch (MyException& ob) {
    cout << ob.what() <<endl;
    }
    return 0;;
}