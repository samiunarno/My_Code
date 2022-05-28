#include <iostream>
using namespace std;
int main()
{
    string x[200] = {"time"};
    string h[200] = {"Time is : 10 to 4"};
    while(true){
        char c[10] = {'Y','N'};
        char n;
        cout<<"Want to Ask Any Question :";
        cin>>n;
        if(n==c[0]){
            cout<<"Welcome"<<endl;
            string y ;
            cout<<"Question :";
            cin>>y;
            if(y==x[0]){
                cout<<h[0]<<endl;
            }
        }
        else if(n==c[1]){
            cout<<"Thanks For Visiting IUB";
            break;
        }
    }
}