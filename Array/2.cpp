// 2.Fill an array with 100 integers having random numbers. Then find the largest, smallest
// and the average value.
#include <iostream>
using namespace std;
int main ()
{
    int n,i,c,lar,sml;
    float avg;

    int sum = 0;

    cout<<"Size of Array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++) {
        arr[i] = rand()%100;
        cout<<"Elements"<<i+1<<":"<<arr[i]<<endl;
    }
    lar = arr[0];
    for(i=0;i<n;i++){
        if(lar<arr[i]){
            lar = arr[i];
        }
    }
    cout<<"\n";
    cout<<"Largest is :"<<lar<<endl;
    sml = arr[0];
    for(i=0;i<n;i++){
        if(sml>arr[i]){
            sml = arr[i];
        }
    }
    cout<<"\n";
    cout<<"Smallest is :"<<sml<<endl;

    for(i=0;i<n;i++) {
        sum = sum + arr[i];
        avg = (float) sum / (float) n;
    }
    cout<<"\n";
    cout<<"Average is :"<<avg;

}