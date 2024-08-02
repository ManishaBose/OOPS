#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
        Rectangle();
        int area();
};
Rectangle :: Rectangle(){
    length =0;
    breadth =0;
    cout<<length<<endl;
}
int Rectangle :: area(){
    return length*breadth;
}
int main(){
    cout<<r.area()<<endl;
}