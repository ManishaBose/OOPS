#include<iostream>
using namespace std;

void rev(string& a){
    char temp;
    for(int i=0, j=a.length()-1;i<j;i++,j--){
        temp = a[i];
        a[i] = a[j];
        a[j]=temp;
    }
}
int main(){
    string a = "Manisha";
    rev(a);
    cout<<a;
}