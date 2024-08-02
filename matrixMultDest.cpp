#include<iostream>
using namespace std;
class Matrix{
    int r, c, **arr;
    public:
        void inz();
        void show();
        Matrix(int, int);
        ~Matrix();
        Matrix operator*(Matrix &);
        void operator=(const Matrix &); //
    };
Matrix :: Matrix(int r, int c){
    this->r=r;
    this->c=c;
    arr=new int* [r];
    for(int i=0;i<r;i++)
        arr[i]=new int [c];
}
Matrix::~Matrix(){
    for(int i=0;i<r;i++)
        delete[] arr[i];
    delete[] arr;
}
void Matrix::inz(){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter the value of ["<<i<<"]["<<j<<"] ";
            cin>>arr[i][j];
        }
    }
}
void Matrix::show(){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
}
Matrix Matrix::operator*(Matrix &ob){
    Matrix temp(r,ob.c);
    for(int i=0;i<r;i++){
        for(int j=0;j<ob.c;j++){
            temp.arr[i][j]=0;
            for(int k=0;k<ob.r;k++)
                temp.arr[i][j]+=arr[i][k]*ob.arr[k][j];
        }
    }
    return temp; //once this object goes out of scope, destructor will be called and array will be deleted
}
void Matrix::operator=(const Matrix &m){
    for(int i=0;i<m.r;i++)
        for(int j=0;j<m.c;j++)
            arr[i][j]=m.arr[i][j];
}
//When you try to assign this temporary object to m3 using the operator=, it requires a non-const reference, but you can't bind a non-const reference to an rvalue (temporary object).
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
    m1.inz();
    cout<<"Enter second matrix:"<<endl;
    m2.inz();
    cout<<"First matrix is:"<<endl;
    m1.show();
    cout<<"Second matrix is:"<<endl;
    m2.show();
    if(c1==r2){
        Matrix m3(r1,c2);
        m3=m1*m2;
        cout<<"Multiplied matrix is:"<<endl;
        m3.show();
    }
    else
       cout<<"Matrix multiplication not possible";
    return 0;
}