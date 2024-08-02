#include<iostream>
using namespace std;
struct students{
    int *arr, **arr1;
    students(){
        arr1 = new int* [3];
        for(int i=0;i<3;i++)
            arr1[i]=new int[3];
    }
    ~students(){
        delete []arr; //deletes dynamically allocated array
        cout<<"Destructor executed"<<endl;
        for(int i=0;i<3;i++)
            delete[] arr1[i]; //review
        delete[] arr1;
        
    }
};
int main(){
    students *s = new students();
    delete s; //deletes the object s
    return 0;
}