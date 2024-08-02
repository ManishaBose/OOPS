#include<iostream>
using namespace std;

int main(){
    int r, c;
    int **arr = new int*[r];
    for(int i=0;i<r;i++){
        arr[i] = new int [c];
    }
    return 0;
}