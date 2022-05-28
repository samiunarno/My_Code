// 15.Take the size of a matrix, A from the user. Create the matrix, A and fill it with user input.
// Then, transpose of A in another matrix B. Print both A and B.

#include <iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"Enter Row :";
    cin>>r;
    cout<<"Enter Column :";
    cin>>c;
    int a[r][c],t[r][c];

    cout<<"Enter Element :"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"Element A :"<<i+1<<j+1<<":";
            cin>>a[i][j];
        }
    }
        cout<<endl;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                t[j][i]=a[i][j];
            }
        }
        cout<<"Transpose Matrix :"<<endl;
        for(int i=0;i<c;i++){
            for(int j =0;j<r;j++){
                cout<<" "<<t[i][j];
                if(j==r-1){
                    cout<<endl<<endl;
                }
            }
        }
    }
