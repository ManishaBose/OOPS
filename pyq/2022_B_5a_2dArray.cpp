//2D array
#include<iostream>
using namespace std;

class A{
    int **arr, r, c;
    public:
        A(int r, int c){
            this->r=r;
            this->c=c;
            arr=new int*[r];
            for(int i=0;i<r;i++)
                arr[i] = new int[c];
        }
        ~A(){
            for(int i=0;i<r;i++){
                delete []arr[i];
            }
            delete []arr;
        }
};
int main(){
    A *ob = new A(5,5);
    delete ob;
    return 0;
}