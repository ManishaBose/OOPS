#include<iostream>
using namespace std;
class matrix{
    int r, c, **arr;
    public:
        void inz();
        void show();
        matrix mult(matrix &);
        matrix(int, int);
        ~matrix();
};
matrix::~matrix(){
    for(int i = 0; i < r; i++)
        delete[] arr[i];
    delete[] arr;
}
matrix::matrix(int r, int c){
    this->r = r;
    this->c = c;
    arr = new int*[r];
    for(int i = 0; i < r; i++)
        arr[i] = new int[c];
}
void matrix::inz(){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<"Enter the element at position ["<<i<<"]["<<j<<"]: ";
            cin >> arr[i][j];
        }
    }
}
void matrix::show(){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
matrix matrix::mult(matrix &ob){
    matrix temp(r, ob.c);
    for(int i = 0; i < r; i++){
        for(int j = 0; j < ob.c; j++){
            temp.arr[i][j] = 0;
            for(int k = 0; k < ob.r; k++){
                temp.arr[i][j] += arr[i][k] * ob.arr[k][j];
            }
        }
    }
    return temp;
}
int main(){
    matrix m1(2, 3), m2(3, 4);
    cout<<"Enter the elements of the first matrix:"<<endl;
    m1.inz();
    cout<<"Enter the elements of the second matrix:"<<endl;
    m2.inz();
    cout << "Matrix 1:"<<endl;
    m1.show();
    cout << "Matrix 2:"<<endl;
    m2.show();
    matrix m3 = m1.mult(m2);
    cout << "Multiplied matrix:"<<endl;
    m3.show();
    return 0;
}