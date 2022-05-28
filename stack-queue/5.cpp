// 5.Decode a given sequence to construct a minimum number without repeated digits.[help]

#include <iostream>
using namespace std;
void minimum(string a){
    int max = 0;
    int en = 0;
    int j;
    for(int i=0;i<a.length();i++){
        int n = 0;
        switch (a[i]) {
            case 'I':{
                j=i+1;
                while(a[j]=='D' && j<a.length()){
                    n++;
                    j++;
                }
                if(i==0){
                    max = n+2;
                    cout<<" "<<++en;
                    cout<<" "<<max;
                    en=max;
                }
                else{
                    max=max+n+1;
                    en=max;
                    cout<<" "<<en;
                }
                for(int k=0;i<n;k++){
                    cout<<" "<<--en;
                    i++;
                }
                break;
            }
            case 'D':{
                if(i==0){
                    j=i+1;
                    while(a[j]=='D'&&j<a.length()){
                        n++;
                        j++;
                    }
                    max=n+2;
                    cout<<" "<<max<<" "<<max-1;
                    en=max-1;
                }
                else{
                    cout<<" "<<en-1;
                    en--;
                }
                break;
            }
        }
    }
}
int main() {
    string a;
    cout<<"Encode String :";
    cin>>a;
    minimum(a);
}
