// 17.Count the number of prime numbers in a 2D integer array.

#include <iostream>
using namespace std;
int main()
{
   
    int row=3, col=3, i, j, m,p;
    int A[row][col];
  
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            A[i][j]=rand()%30;
        }
    }
   
    cout << "2D array is: " <<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
   
    int count=0;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            m=2;
            p=1;
            while(m<A[i][j])
            {
                if(A[i][j]%m==0)
                {
                    p=0;
                    break;
                }
                m++;
            }
            if(p==1)
            {
                count++;
            }
        }
    }
    cout << "Total " << count << " prime numbers in the array" <<endl;
}