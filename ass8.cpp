#include <iostream>
using namespace std;
class WingedAnimals {
protected:
    int wingspan;
public:
    WingedAnimals(int);
    void show();
};
WingedAnimals::WingedAnimals(int w) : wingspan(w){}
void WingedAnimals::show() {
    cout << "Winged animal flying with a wingspan of " << wingspan << " units." << endl;
}
class Mammals {
protected:
    int numLegs;
public:
    Mammals(int);
    void show();
};
Mammals::Mammals(int n) : numLegs(n) {}
void Mammals::show() {
    cout << "Mammal walking on " << numLegs << " legs." << endl;
}
class Bat : public WingedAnimals, public Mammals {
    string species;
public:
    Bat(int, int, string);
    void display();
};
Bat::Bat(int w1, int n1,string s1) : WingedAnimals(w1), Mammals(n1), species(s1) {}
void Bat::display() {
    cout << "Bat species: " << species << endl;
    WingedAnimals::show();
    Mammals::show();
}
int main() {
    Bat bat(30, 2, "Fruit Bat");
    bat.display();
    return 0;
}

