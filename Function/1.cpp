#include <iostream>
using namespace std;
void patternprinting(int r,char c)
{
    int i = 0, j = 0, k = 0;
    while (i < r) {
        while (k <= r - i - 2) {
            cout << " "<<" ";
            k++;
        }
        k = 0;
        while (j < 2 * i - 1) {
            cout << c<<" ";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}
int main()
{
    int r;
    char c;
    cout<<"Enter Size Of a Pattern  :";
    cin>>r;
    cout<<"CHARACTER :";
    cin>>c;
    patternprinting(r,c);
}
