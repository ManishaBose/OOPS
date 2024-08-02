#include<iostream>
using namespace std;
void display(int arr[], int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        arr[i]=i;
    }
    display(arr, 5);
    int size = 10;
    int *arr1=new int [size]; //cannot be arr because it has been static allocated
    for(int i=0;i<size;i++){
        arr1[i]=i+10;
    }
    display(arr1, size);
    delete []arr1; //don't forget to delete dynamically allocated memory [1D DELLACOTION]
    //2d allocation :)
    int rows=3;
    int cols=4;
    int el=1;
    int **arr2 = new int*[rows]; //notice the extra *after int
    for(int i=0;i<rows;i++)
        arr2[i]= new int [cols];
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            arr2[i][j]=el++;
    //display 2d array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
            cout<<arr2[i][j]<<" ";
        cout<<endl;
    }
    //dellacotion of 2d array
    for(int i=0;i<rows;i++)
        delete []arr2[i];
    delete []arr2;
    return 0;
}