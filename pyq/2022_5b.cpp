#include<iostream>
using namespace std;

class Distance{
    int feet, inch;
    public:
        Distance(int, int);
        friend ostream& operator<<(ostream&, Distance&);
        friend istream& operator>>(istream&, Distance&);
};
Distance::Distance(int a, int b):feet(a), inch(b){}
ostream& operator<<(ostream& out, Distance & ob){
    out<<"Feet: "<<ob.feet<<" Inch: "<<ob.inch<<endl;
    return out;
}
istream & operator>>(istream& in, Distance & ob){
    in>>ob.feet>>ob.inch;
    return in;
}
int main(){
    Distance d(0,0);
    cin>>d;
    cout<<d;
    return 0;
}