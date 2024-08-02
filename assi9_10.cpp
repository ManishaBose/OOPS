/* ASSIGNMENT 10
#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string name;
public:
    Cricketer(std::string name) : name(name) {}
    virtual void printDetails() = 0; // Pure virtual function makes this class Abstract
};

class Bowler : virtual public Cricketer {
protected:
    int wicketsTaken;
public:
    Bowler(std::string name, int wicketsTaken) : Cricketer(name), wicketsTaken(wicketsTaken) {}
    void printDetails() override {
        std::cout << "Bowler Name: " << name << ", Wickets Taken: " << wicketsTaken << std::endl;
    }
};

class Batsman : virtual public Cricketer {
protected:
    int runsScored;
public:
    Batsman(std::string name, int runsScored) : Cricketer(name), runsScored(runsScored) {}
    void printDetails() override {
        std::cout << "Batsman Name: " << name << ", Runs Scored: " << runsScored << std::endl;
    }
};

class Allrounder : public Bowler, public Batsman {
public:
    Allrounder(std::string name, int wicketsTaken, int runsScored) : Cricketer(name), Bowler(name, wicketsTaken), Batsman(name, runsScored) {}
    void printDetails() override {
        std::cout << "Allrounder Name: " << name << ", Wickets Taken: " << wicketsTaken << ", Runs Scored: " << runsScored << std::endl;
    }
};

int main() {
    Bowler bowler("John", 50);
    Batsman batsman("Jane", 2000);
    Allrounder allrounder("Doe", 100, 1500);

    Cricketer* cricketer = &bowler;
    cricketer->printDetails();

    cricketer = &batsman;
    cricketer->printDetails();

    cricketer = &allrounder;
    cricketer->printDetails();

    return 0;
}*/

/* ASSIGNMENT 9
#include <iostream>
#include <fstream>
#include <cmath>
#include <stdexcept>

// Custom exception class
class MyException : public std::exception {
public:
    const char* what() const throw() {
        return "Negative number exception";
    }
};

double average(int a, int b) {
    if (a < 0 || b < 0) {
        throw MyException();
    }
    return (a + b) / 2.0;
}

void solveQuadratic(double a, double b, double c) {
    if (a == 0) {
        throw std::invalid_argument("a should not be zero in a quadratic equation");
    }

    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        throw std::domain_error("The equation has no real roots");
    }

    double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
    double root2 = (-b - std::sqrt(discriminant)) / (2 * a);

    std::cout << "Roots are: " << root1 << ", " << root2 << std::endl;
}

int main() {
    try {
        std::cout << "Average: " << average(10, 20) << std::endl;
        solveQuadratic(1, -3, 2);
    } catch (MyException& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
*/