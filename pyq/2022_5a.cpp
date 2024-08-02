#include<iostream>
using namespace std;

class Time{
    int hh, mm;
    public:
        Time(int, int );
        Time operator++(); //pre-increment
        Time operator++(int);//post_increment
        bool operator==(Time &);//==
        void disp();
};
Time::Time(int h, int m):hh(h),mm(m){}
Time Time::operator++(){
    mm++;
    if(mm == 60){
        mm=0;
        hh++;
    }
    Time(hh,mm).disp();
    return Time(hh,mm);
}
Time Time::operator++(int x){
    Time t(hh, mm);
    mm++;
    if(mm == 60){
        mm=0;
        hh++;
    }
    t.disp();
    return t;
}
bool Time::operator==(Time &ob){
    if(mm==ob.mm && hh==ob.hh)
        return true;
    else
        return false;
}
void Time::disp(){
    cout<<"Hours: "<<hh<<" Minutes: "<<mm<<endl;
}
int main(){
    Time t(4,59);
    cout<<"Current time: "<<endl;
    t.disp();
    cout<<"Pre-increment operator: "<<endl;
    ++t;
    cout<<"Post-increment operator: "<<endl;
    t++;
    cout<<"Final time: "<<endl;
    t.disp();
    Time t2(5,1);
    if(t==t2)
        cout<<"Two times are equal."<<endl;
    else
        cout<<"Two times are not equal."<<endl;
    return 0;
}