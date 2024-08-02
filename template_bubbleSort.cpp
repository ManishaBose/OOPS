//bubble sort using template function

#include<iostream>
using namespace std;
template<typename t>
void bubbleSort(t arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=size-1; i<j;j--){
            if(arr[j]<arr[j-1]){
                t temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}
int main(){
    int size = 5;
    int arr[]={101,23,3,45,52};
    bubbleSort(arr, 5);
    cout<<"Sorted array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}