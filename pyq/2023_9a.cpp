#include<iostream>
using namespace std;

template<typename T>
void bubble_sort(T arr[], int size){
    T temp;
    for(int i=0;i<size-1;i++){
        for(int j=size-1;i<j;j--){
            if(arr[j]<arr[j-1]){
                temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}
int main(){
    int arr1[]={5, 3, 2, 1, 4};
    float arr2[]={5.5, 3.3, 2.2, 1.1, 4.4};
    bubble_sort(arr1,5);
    cout<<"Sorted integer array is:"<<endl;
    for(int i=0;i<5;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    bubble_sort(arr2,5);
    cout<<"Sorted float array is:"<<endl;
    for(int i=0;i<5;i++)
        cout<<arr2[i]<<" ";
    return 0;
}