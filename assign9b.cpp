#include <iostream>
#include <cmath>
using namespace std;

int main() {
    try {
        double a, b, c;
        cout << "Enter coefficients a, b and c: ";
        cin >> a >> b >> c;
        if (a == 0) {
            throw 1;
        }
        double disc = b * b - 4 * a * c;
        if (disc < 0) {
            throw 2.0f;
        } 
        else {
            double root1 = (-b + sqrt(disc)) / (2 * a);
            double root2 = (-b - sqrt(disc)) / (2 * a);
            cout << "Root 1: " << root1 << endl;
            cout << "Root 2: " << root2 << endl;
        }
    } 
    catch (...) {
        cout << "Exception occurred" << endl;
    }
    return 0;
}
