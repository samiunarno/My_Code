// 20.Convert a 1D array of size 10 to a 2x5 or 5x2 (2D) array (make sure no data is lost).

#include <iostream>
using namespace std;
void DD(int arr[], int brr[][2], int r, int c) {

    int x=0;
    for(int i=0; i<r; i++) {

        for(int j=0; j<c; j++) {

            brr[i][j] = arr[x++];
        }
    }
}

int main() {

    int arr[10];

    int brr[5][2];
    for(int i=0; i<10; i++) {
        cin>>arr[i];
    }
    DD(arr,brr, 5, 2);
    for(int i=0; i<5; i++) {
        for(int j=0; j<2; j++) {
            cout<<brr[i][j]<<" ";
        }
        cout<<"\n";
    }
}