//Dynamic Memory: If your class allocates dynamic memory using new, you should free that 
//memory in the destructor using delete to prevent memory leaks.


//1 D array
#include<iostream>
using namespace std;

class Students{
    int *arr;
    public:
        Students(){
            arr = new int [10]; //Allocates array on the healp
            for(int i=0;i<10;i++)
                arr[i] = i+10; // Intializes the array
        }
        ~Students(){
            delete []arr;
        }
};
int main(){
    Students *s = new Students; //Creates an instance on heap
    delete s; //Deletes it
    return 0;
}