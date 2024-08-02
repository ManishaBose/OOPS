#include<iostream>
using namespace std;

int addnatural(int, int);

int addnatural(int x, int y=1){
    int sum=0;
    for(int i=y;i<=x;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    cout<<"Calling with two parameters."<<endl;
    cout<<"Sum is: "<<addnatural(100,50)<<endl;
    cout<<"Calling with 1 parameter."<<endl;
    cout<<"Sum is: "<<addnatural(50)<<endl;
    return 0;
}