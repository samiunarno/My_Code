// 16.Create a matrix, A of size 4x3 and B of size 3x2. Fill both matrices with random
// numbers. Multiply A and B and store the resultant matrix in C. Print A, B and C.

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Row :";
    cin>>a;
    cout<<endl;
    cout<<"Enter Column :";
    cin>>b;
   int A[a][b],B[a][b],C[a][b],i,j;

   cout<<"Enter Element of Row :"<<endl;
   for(i=0;i<a;i++){
       for(j=0;j<b;j++){
           cin>>A[i][j];
       }
   }
   cout<<"Enter Element of Column :"<<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cin>>B[i][j];
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cin>>C[i][j];
        }
    }
    cout<<"Element A :";
    cout<<"\n";
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Element B :";
    cout<<"\n";
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            C[i][j] = A[i][j] * B[i][j];
        }
    }
    cout<<"Multiply  is C :"<<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}