/*
class ABC{
    ....
    ....
    public:
        ....
        ....
        friend void funct(ABC &);
}
*/
#include<iostream>
using namespace std;

class ABC{
    int a,b;
    public:
        ABC(int p, int q):a(p), b(q){}
        friend float mean(ABC &);
};
float mean(ABC &obj){
    return (obj.a +obj.b)/2.0; //2.0 is necessary
}

int main(){
    ABC s(2,1);
    cout<<mean(s);
    return 0;
}