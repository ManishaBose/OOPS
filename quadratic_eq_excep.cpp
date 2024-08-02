#include<iostream>
#include<cmath>
using namespace std;
class Exception1: public exception{
    public:
    const char* what () throw(){
        return "a cannot be zero";
    }};
class Exception2: public exception{
    public:
    const char* what () throw(){
        return "Discriminant is negative; no real roots exist";
    }
};
int main(){
    try{
        Exception1 ob1;
        Exception2 ob2;
        double a, b, c;
        cout<<"Enter a, b, c: ";
        cin>>a>>b>>c;
        if(a==0)
            throw ob1;
        double disc = b*b - 4*a*c;
        if(disc<0)
            throw ob2;
        double root1 = (-b + sqrt(disc))/(2*a);
        double root2 = (-b - sqrt(disc))/(2*a);
        cout<<"Roots are: "<<root1<<" and "<<root2<<endl;
    }
    catch(Exception1 ob){
        cout<<ob.what()<<endl;
    }
    catch(Exception2 ob){
        cout<<ob.what()<<endl;
    }
    cout<<"End of program"<<endl;
    return 0;
}
