#include<iostream>
using namespace std;

void xstrcpy(char *str1, char *str2){
    while(*str2 != '\0'){
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1='\0';
}

int main(){
    char str1[10];
    char str2[] = {'H','e','l','l','o'};
    xstrcpy(str1, str2);
    cout<<str1<<endl;
    return 0;
}