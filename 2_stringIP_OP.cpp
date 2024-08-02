#include<iostream>
#include<string>
using namespace std; 
int main(){
    char n[20];
    cout<<"Enter first name: ";
    cin>>n; //Won't take spaces
    cout<<n<<endl;
    int size=50;
    char name[size];
    cout<<"Enter second name: ";
    //Note: if you enter >1 words, getline will not work and cout will print other words
    cin.ignore();//to ignore new line character
    cin.getline(name, size); //works for only character arrays, but will take spaces as well
    cout<<name<<endl;
    string n2;
    cout<<"Enter third string: ";
    getline(cin, n2); //for string data type
    cout<<n2;
    return 0;
}