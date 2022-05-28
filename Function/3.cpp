#include <iostream>
using namespace std;
int numbersfactorial(int n);
int main()
{
    int n =5;

    cout<<"Factorial "<<n<<" "<<"is"<<" "<<numbersfactorial(n);


}
int numbersfactorial(int n){
    if(n>1){
        return n* numbersfactorial(n-1);
    }
    else{
        return 1;
    }
}
