#include <iostream>
using namespace std;
class Cricketer { //base class
protected:
    string name;
    int age;
public:
    Cricketer(string n, int a) : name(n), age(a) {}
    virtual void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Bowler : virtual public Cricketer {
protected:
    int wickets;
public:
    Bowler(const string& name, int age, int wickets) : Cricketer(name, age), wickets(wickets) {}

    void printDetails() override {
        Cricketer::printDetails();
        cout << "Type: Bowler" << endl;
        cout << "Wickets: " << wickets << endl;
    }
};

class Batsman : virtual public Cricketer {
protected:
    int runs;

public:
    Batsman(const string& name, int age, int runs) : Cricketer(name, age), runs(runs) {}

    void printDetails() override {
        Cricketer::printDetails();
        cout << "Type: Batsman" << endl;
        cout << "Runs Scored: " << runs << endl;
    }
};

class Allrounder : public Bowler, public Batsman {
public:
    Allrounder(const string& name, int age, int wickets, int runs)
        : Cricketer(name, age), Bowler(name, age, wickets), Batsman(name, age, runs) {}

    void printDetails() override {
        Cricketer::printDetails();
        cout << "Type: Allrounder" << endl;
        cout << "Wickets: " << Bowler::wickets << endl;
        cout << "Runs Scored: " << Batsman::runs << endl;
    }
};

int main() {
    Bowler bowler("John", 28, 150);
    Batsman batsman("Smith", 30, 5000);
    Allrounder allrounder("Doe", 25, 100, 3000);

    Cricketer *ptr1 = &bowler;
    Cricketer *ptr2 = &batsman;
    Cricketer *ptr3 = &allrounder;

    ptr1->printDetails(); // Dynamic method dispatch
    cout << endl;
    ptr2->printDetails(); // Dynamic method dispatch
    cout << endl;
    ptr3->printDetails(); // Dynamic method dispatch
    cout << endl;

    return 0;
}
