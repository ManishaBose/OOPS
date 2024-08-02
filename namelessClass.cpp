#include<iostream>
using namespace std;
class {
    public:
        void show(){
            cout<<"Nameless class"<<endl;
        }
} ob1, ob2;
int main(){
    ob1.show();
    ob2.show();
    return 0;
}