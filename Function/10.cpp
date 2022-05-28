#include <iostream>
using namespace std;
void getsort(int a[],int n){
    int m,t;
    for(int i=0;i<n-1;i++){
        m=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[m]){
                m=j;
                t=a[i];
                a[i]=a[m];
                a[m]=t;
            }
        }
    }
}
int main(){
    int l;
    cout<<"Size of Aray :";
    cin>>l;
    int a[l];
    cout<<"Unsorted Array :";
    for(int i=0;i<l;i++){
        cin>>a[i];
    }
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
        cout<<endl;
        getsort(a,l);
    }
    cout<<"Sorted Array :"<<endl;
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
}