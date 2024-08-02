//Shows the need for deep copy constructor; because here shallow copy doesnot work
#include<iostream>
using namespace std;
class A{
    int *arr, s;
    int *n = new int(10);//creating a single integer in dynamic memory (heap), and initializing it with the value 10. The pointer n is pointing to this newly allocated integer
    public:
        A(int x){
            s = x;
            arr = new int[x]; //creating an array of x integers in dynamic memory (heap)
        }
        ~A(){
            delete[] arr; //deleting the array of integers
            delete n; //deleting the single integer
        }
        void input(){
            for(int i = 0; i < s; i++){
                cout << "Enter element " << i << ": ";
                cin >> arr[i];
            }
        }
        void check(){
            cout<<*n<<endl;
        }
        void show(){
            for(int i = 0; i < s; i++)
                cout << arr[i] << " ";
            cout<<endl;
        }
};
int main(){
    A *ob1 = new A(5); //5 is the size of the array
    ob1->input();
    ob1->show();
    A ob2(*ob1);
    ob2.show();
    ob1->check();
    delete ob1;
    ob1->show(); //Error: Segmentation fault (core dumped)
    ob2.show(); //Erroroneous output
    return 0;
}