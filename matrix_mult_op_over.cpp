#include<iostream>
using namespace std;
class Matrix{
    int r, c, **arr;
    public:
        friend istream &operator>>(istream&, Matrix&);
        friend ostream &operator<<(ostream&, Matrix&);
        Matrix(int, int);
        Matrix operator*(Matrix &);
    };
Matrix :: Matrix(int r, int c){
    this->r=r;
    this->c=c;
    arr=new int* [r];
    for(int i=0;i<r;i++)
        arr[i]=new int [c];
}
istream &operator>>(istream &in, Matrix &d){
    for(int i=0;i<d.r;i++){
        for(int j=0;j<d.c;j++){
            cout<<"Enter the value of ["<<i<<"]["<<j<<"] ";
            cin>>d.arr[i][j];
        }
    }
    return in;
}
ostream &operator<<(ostream &out, Matrix &d){
    for(int i=0;i<d.r;i++){
        for(int j=0;j<d.c;j++)
            cout<<d.arr[i][j]<<"  ";
        cout<<endl;
    }
    return out;
}
Matrix Matrix::operator*(Matrix &ob){
    int i,j,k;
    Matrix temp(r,ob.c);
    for(int i=0;i<r;i++){
        for(int j=0;j<ob.c;j++){
            temp.arr[i][j]=0;
            for(int k=0;k<ob.r;k++)
                temp.arr[i][j]+=arr[i][k]*ob.arr[k][j];
        }
    }
    return temp;
}
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter the number of rows in 1st matrix: ";
    cin>>r1;
    cout<<"Enter the number of columns in 1st matrix: ";
    cin>>c1;
    cout<<"Enter the number of rows in 2nd matrix: ";
    cin>>r2;
    cout<<"Enter the number of columns in 2nd matrix: ";
    cin>>c2;
    Matrix m1(r1,c1), m2(r2,c2);
    cout<<"Enter first matrix:"<<endl;
    cin>>m1;
    cout<<"Enter second matrix:"<<endl;
    cin>>m2;
    cout<<"First matrix is:"<<endl;
    cout<<m1;
    cout<<"Second matrix is:"<<endl;
    cout<<m2;
    if(c1==r2){
        Matrix m3(r1,c2);
        m3=m1*m2;
        cout<<"Multiplied matrix is:"<<endl;
        cout<<m3;
    }
    else
        cout<<"Matrix multiplication not possible";
    return 0;
}