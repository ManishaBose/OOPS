#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
public:
    Cricketer(string name) : name(name) {}
    virtual void print(){
        cout << "Cricketer Name: " << name << endl;
    }
};

class Bowler : virtual public Cricketer {
protected:
    int wicketsTaken;
public:
    Bowler(string name, int wicketsTaken) : Cricketer(name), wicketsTaken(wicketsTaken) {}
    void print() {
        cout << "Bowler Name: " << name << ", Wickets Taken: " << wicketsTaken << endl;
    }
};

class Batsman : virtual public Cricketer {
protected:
    int runsScored;
public:
    Batsman(string name, int runsScored) : Cricketer(name), runsScored(runsScored) {}
    void print() {
        cout << "Batsman Name: " << name << ", Runs Scored: " << runsScored << endl;
    }
};

class Allrounder : public Bowler, public Batsman {
public:
    Allrounder(string name, int wicketsTaken, int runsScored) : Cricketer(name), Bowler(name, wicketsTaken), Batsman(name, runsScored) {}
    void print() {
        /*Cricketer::print();
        Bowler::print();
        Batsman::print();*/
        cout << "Allrounder Name: " << name << ", Wickets Taken: " << wicketsTaken << ", Runs Scored: " << runsScored << endl;
    }
};

int main() {
    Bowler bowler("Jadeja", 200);
    Batsman batsman("Kohli", 13000);
    Allrounder allrounder("Pandya", 80, 1800);

    Cricketer* cricketer = &bowler;
    cricketer->print();

    cricketer = &batsman;
    cricketer->print();

    cricketer = &allrounder;
    cricketer->print();

    return 0;
}