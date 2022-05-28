// 21.Create a 5x5 matrix. Compute the sum of the values along the two diagonal. Print the
// sum separately.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m[n][n];
    int l =0, r = 0;
    cout << "Enter elements : \n";
    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            cin >> m[i][j];
            if(i==j)
                l += m[i][j];
            if((i+j) == n-1)
                r += m[i][j];
        }
    }
    cout << "Sum of Left  : "<< l << endl;
    cout << "Sum of Right : "<< r << endl;
}
