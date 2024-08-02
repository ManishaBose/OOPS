#include<iostream>
using namespace std;

class Number{
    protected:
        int dec_no;
    public:
        virtual void display() = 0; //Pure virtual function
        Number(int x):dec_no(x){}
};
class Hex: public Number{
    char hex_no[100];
    char* decToHex(int dec_no){
            int x=dec_no;
            int i=0,a,j=0;
            char temp;
            while(dec_no!=0){
                a=dec_no%16;
                if(a<10)
                    hex_no[i] = a+'0';
                else
                    hex_no[i] = a+'A'-10;
                i++;
                dec_no/=16;
            }
            hex_no[i--]='\0';
            while(j<=i){
                temp=hex_no[j];
                hex_no[j] = hex_no[i];
                hex_no[i] = temp;
                j++;
                i--;
            }
            return hex_no;
        }
    public:
        Hex(int a):Number(a){}
        void display(){
            cout<<"Number in decimal: "<<dec_no<<endl;
            cout<<"Number in hexadecimal: "<<decToHex(dec_no)<<endl;
        }
};
class Oct: public Number{
    char oct_no[100];
    char* decToOct(int dec_no){
            int x=dec_no;
            int i=0,a,j=0;
            char temp;
            while(dec_no!=0){
                a=dec_no%8;
                    oct_no[i++] = a+'0';
                dec_no/=8;
            }
            oct_no[i--]='\0';
            while(j<=i){
                temp=oct_no[j];
                oct_no[j] = oct_no[i];
                oct_no[i] = temp;
                j++;
                i--;
            }
            return oct_no;
        }
    public:
        Oct(int a):Number(a){}
        void display(){
            cout<<"Number in decimal: "<<dec_no<<endl;
            cout<<"Number in octal: "<<decToOct(dec_no)<<endl;
        }
};

int main(){
    Hex h(1000);
    Oct o(1000);
    Number* pt;
    pt = &h;
    pt->display();
    pt = &o;
    pt->display();
    return 0;
}