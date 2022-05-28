// 19.Convert a 5x7 (2D) integer array to a 1D array.

#include <iostream>
using namespace std;
int main()
{
    int row,col,i,j,m,n;
    cout<<"Enter Row :";
    cin>>row;
    cout<<"Enter Column :";
    cin>>col;
    int A[row][col], B[50];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            A[i][j]=rand()%10;
        }
    }
    cout << "2D array : " <<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout <<endl;
    }

    for(m=0; m<row; m++)
    {
        for(n=0; n<col; n++)
        {
            B[m*col+n]=A[m][n];
        }
    }
    cout << " 1D array is: " <<endl;
    for(m=0; m<row*col; m++)
    {
        cout << B[m] << "  ";
    }
}