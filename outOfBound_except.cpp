#include<iostream>
using namespace std;
int main(){
    int * arr;
    arr = new int[5];
    for(int i = 0; i < 5; i++)
        arr[i] = i;
    for(int i = 0; i < 6; i++){
        try{
            if(i == 5)
                throw i;
            cout << arr[i] << " ";
        }
        catch(int i){
        cout << "Out of bound exception" << endl;
        }
    }
    return 0;
}