#include<iostream>
using namespace std;
class dist{
    int feet, inch;
    public:
        dist(int, int);
        void show();
        friend istream &operator>>(istream&, dist&);
        friend ostream &operator<<(ostream&, dist&);
};
dist::dist(int f, int i){
    feet = f;
    inch = i;
}
ostream &operator<<(ostream &out, dist &d){
    out<<"Feet: "<<d.feet<<" Inch: "<<d.inch<<endl;
    return out;
}
istream &operator>>(istream &in, dist &d){
    in>>d.feet>>d.inch;
    return in;
}
int main(){
    dist d1(0,0);
    cout<<"Enter feet and inch: "<<endl;
    cin>>d1;
    cout<<d1;
    return 0;
}