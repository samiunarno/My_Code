// 5.Create two floating-point arrays. Fill them with random numbers. Sort the first array in
// descending order and the second array in ascending order. Print both arrays before and
// after sorting.
#include <iostream>
using namespace std;
int main ()
{
    float arr[5],arr2[5];
    int i,j;
    float n;
    float r;
    cout<<"Enter Value Array I :";
    for(i=0;i<5;i++){
        cin>>n;
        arr[i]=n;
    }
    cout<<"Enter Value Array II :";
    for(i=0;i<5;i++){
        cin>>n;
        arr2[i]=n;
    }
    cout<<"Unsorted I:"<<endl<<" ";
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            if(arr[j]<arr[j+1]){
                r = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=r;
            }
        }
    }
    cout<<"Sorted I : (DESCENDING) \n";
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"UnSorted Array II : \n";
    for(i=0;i<5;i++){
        cout<<arr2[i]<<" ";

    }
    cout<<"\n";
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            if(arr2[j]>arr2[j+1]){
                r = arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=r;
            }
        }
    }
    cout<<"Sorted Array II : (ASCENDING) \n";
    for(i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
}