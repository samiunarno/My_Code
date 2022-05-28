// 13.Create a 5x3 integer array. Fill it with random numbers between 30 and 50. Print the
// array.

#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter a Row :";
    cin>>row;
    cout<<"\n";
    cout<<"Enter a Column :";
    cin>>col;

    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=rand()%30+21;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}