#include <iostream>
using namespace std;
int volofspr(int r){
    float v = (4*3.14*r*r*r)/3;

    return v;
}
int main()
{
    int r;
    cout<<"Enter Radius :";
    cin>>r;
    cout<<"Volume of Spehere is : "<<volofspr(r);

}
