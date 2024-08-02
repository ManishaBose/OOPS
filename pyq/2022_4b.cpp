#include<iostream>
using namespace std;

class Area{
    int areaSquare, areaRect;
    public:
        Area(int a){
            cout<<"Area of square is: "<<a*a<<endl;
        }
        Area(int l, int b){
            cout<<"Area of rectangle is:"<<l*b;
        }
};
int main(){
    Area sq(5);
    Area rec(5,10);
    return 0;
}