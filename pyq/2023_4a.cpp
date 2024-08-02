#include<iostream>
using namespace std;

class mat{
    int r, c, **arr;
    public:
        mat(int, int);
        void inz();
        void display();
        mat operator*(mat &);
};
mat::mat(int row, int col){
    this->r = row;
    this->c = col;
    arr = new int* [r];
    for(int i=0;i<r;i++){
        arr[i] = new int [c];
    }
}
void mat::inz(){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter the value of "<<i<<j<<" : ";
            cin>>arr[i][j];
        }
    }
}
void mat::display(){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
mat mat::operator*(mat &ob){
    mat temp(r,ob.c);
    for(int i=0;i<r;i++){
        for(int j=0;j<ob.c;j++){
            temp.arr[i][j] = 0;
            for(int k=0;k<c;k++){
                temp.arr[i][j]+=arr[i][k]*ob.arr[k][j];
            }
        }
    }
    return temp;
}

int main(){
    int r1, r2, c1, c2;
    cout<<"Enter the no of rows in 1st matrix: ";
    cin>>r1;
    cout<<"Enter the no of cols in 1st matrix: ";
    cin>>c1;
    mat m1(r1,c1);
    m1.inz();
    cout<<"Enter the no of rows in 2nd matrix: ";
    cin>>r2;
    cout<<"Enter the no of cols in 2nd matrix: ";
    cin>>c2;
    mat m2(r2,c2);
    m2.inz();
    cout<<"The first matrix is:"<<endl;
    m1.display();
    cout<<"The first matrix is:"<<endl;
    m2.display();
    if(r1 == c2){
        mat m3(r1,c2);
        m3=m1*m2;
        cout<<"The multiplied matrix is: "<<endl;
        m3.display();
    }
    else
        cout<<"Matrix multiplication not possible.";
        return 0;
}