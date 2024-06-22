#include<iostream>
using namespace std;

class Matrix
{

private:
    int row;
    int col;
    int **m;
public:
    Matrix(){
    row =5;
    col= 5;
    m=new int*[row];
    for (int i=0; i<row; i++)
    {
     m[i]= new int [col];
    }

    }

    Matrix(int row, int col){
    this->row =row;
    this->col =col;
    m=new int*[row];
    for (int i=0; i<row; i++)
    {
        m[i]= new int [col];
    }

    }

    void addElements(int arr[], int size)
    {
    if(size != row*col)
    {
    cout << "Size of array does not match matrix row column limits" << endl;
    return;
    }
    int x = 0;
    for(int i=0; i<row; i++)
    {
    for(int j=0; j<col; j++)
    {
    m[i][j] = arr[x++];
    }
    }
    }

    void Print()
    {   cout<<"Output Array: "<<endl;
        for (int i=0; i<row; i++)
    {
        for( int j=0; j<col; j++)
    {
        cout<<m[i][j]<<" ";
    }
        cout<<endl;
    }
    cout<<"-----------------------"<<endl;
    }

    };


int main()
{
  Matrix *m1=new Matrix(3,3);
  m1->Print();
  Matrix *m2=new Matrix(3,3);
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  m2->addElements(arr, 9);
  m2->Print();

return 83;
}
