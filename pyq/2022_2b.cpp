#include<iostream>
using namespace std;

bool palindrome(string n){
    int i=0, j=n.length()-1;
    string original = n;
    char temp;
    while(i<j){
        temp = n[i];
        n[i]=n[j];
        n[j]=temp;
        i++;
        j--;
    }
    if(n==original)
    return true;
    else
    return false;
}

int main(){
    string str = "mam mam";
    if(palindrome(str))
        cout<<"It is a palindrome string.";
    else
        cout<<"It is not a palindrome string.";
    return 0;
}