// 7.Find the 1st maximum, 2nd maximum, 1st minimum, 2nd minimum and the median value
// from a floating-point array of size 11.

#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, fmax, smax, fmin, smin;

    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Enter Element :";
    cout<<"\n";
    cin>>a[0];
    fmax=fmin=a[0];
    for(i=1; i<n; i++)
    {
        cin>>a[i];
        if(fmax<a[i]){
            fmax=a[i];
        }
        if(fmin>a[i]){
            fmin=a[i];
        }
    }
    smax=fmin;
    smin=fmax;
    for(i=0; i<n; i++)
    {
        if(a[i]<fmax && a[i]>smax) {
            smax=a[i];
        }
        if(a[i]>fmin && a[i]<smin){
            smin=a[i];
        }
    }

    cout<<"First Maximum :"<<fmax<<endl;
    cout<<"Second Maximum :"<<smax<<endl;
    cout<<"First Minimum : "<<fmin<<endl;
    cout<<"Second Minimum : "<<smin<<endl;

    return 0;
}
