// 18.Compute the average value of each of the rows of a 15x10 floating-point array.
#include <iostream>

using namespace std;

void avg(float arr[][10],int row, int col) 
{
    float average;
    for(int i=0; i<row; i++) {
        average = 0.0;
        for(int j=0; j<col; j++) {
            average += arr[i][j];
        }
        cout<<"Average of "<<i<<"th row : "<<average/float(3)<<endl;
    }
}
int main() {
    float arr[15][10];
    cout<<"Enter the values of array :"<<endl;
    for(int i=0; i<15; i++) {
        for(int j=0; j<10; j++) {
            cin>>arr[i][j];
        }
    }
    avg(arr, 15, 10);
    return 0;
}
