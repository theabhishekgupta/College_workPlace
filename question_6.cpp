/*Create 2-D matrices dynamically using class and multiply them.*/

#include<iostream>
using namespace std;
class Matrix{
    int **ptr_arr;
    int size_arr;
public:
    Matrix(int);
    void get();
    void display();
    void multiply(const Matrix&,const Matrix&);
    ~Matrix();
};

Matrix::Matrix(int _n):size_arr(_n){
    ptr_arr=new int*[size_arr];
    for(int i = 0; i < size_arr; i++)
    {
        ptr_arr[i] = new int[size_arr];
    }
}
void Matrix::get(){
  for(int i=0;i<size_arr;i++)
    {
        for(int j=0;j<size_arr;j++){
          //  cout<<"enter the value a["<<i+1<<"]""["<<j+1<<"]:";
            cin>>ptr_arr[i][j];
    }
  }

}
void Matrix::display(){
    for(int i=0;i<size_arr;i++){
            for(int j=0;j<size_arr;j++){
                cout<<"\t\t"<<ptr_arr[i][j]<<"  ";
    }
    cout<<"\n";
  }
}

void Matrix::multiply(const Matrix& obj1 ,const Matrix& obj2){
    int sum;
    for(int i=0;i<size_arr;i++){
        for(int j=0;j<size_arr;j++){
            sum=0;
            for(int k=0;k<size_arr;k++)
                sum=sum+obj1.ptr_arr[i][k]*obj2.ptr_arr[k][j];
            this->ptr_arr[i][j]=sum;
            }
    }
}

Matrix::~Matrix(){
    for(int i = 0; i < size_arr; i++)
    {
        delete [] ptr_arr[i];
    }
    delete [] ptr_arr;
}

int main()
{
    int n;
    cout<<"Enter the Size of sq matrix:";
    cin>>n;
    Matrix M1(n);
    Matrix M2(n);
    Matrix M3(n);
    cout<<"\n\t\t---Enter the 1st array element---\n\n";
    M1.get();
    cout<<"\n\t\t---Enter the 2nd array element---\n\n";
    M2.get();

    cout<<"\n\t\t---1st array element---\n";
    M1.display();
    cout<<"\n\t\t---2nd array element---\n";
    M2.display();
    M3.multiply(M1,M2);
    cout<<"\n\t\t---Multiply 1st matrix and 2nd matrix---\n";
    M3.display();
    return 0;
}
