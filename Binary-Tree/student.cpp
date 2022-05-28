#include <iostream>
#include <vector>
using namespace std;

void comment(float fc){
    if(fc>4)
        cout<<"Good Work\n";
    else
        cout<<"  Not Good\n";
}
int main() {
    int a;
    cout<<"Insert the number of students\n";
    cin>>a;
    int b;
    cout<<"Insert the number of assignments\n";
    cin>>b;
    float m[a+1][b+1];
    float fc[a+1];
    for(int i=1;i<=a;i++){
        vector<float> scores;
        for(int j=1;j<=b;j++){
            cout<<"The marks of assignment "<<j<<" of student "<<i<<":\n";
            cin>>m[i][j];
            scores.push_back(m[i][j]);
        }
        float total=0;
        for(int j=1;j<b;j++){
            total+=scores[j];
        }
        fc[i]=(total)/(b-1);
    }

    cout<<"Student  ";
    for(int j=1;j<=b;j++){
        cout<<"|  A"<<j<<"    ";
    }
    cout<<"| Final Score ";
    cout<<"| Comment        \n";


    for(int i=1;i<=a;i++){
        cout<<i<<"        | ";
        for(int j=1;j<=b;j++){
            cout<<m[i][j]<<"     |  ";
        }
        cout<<fc[i]<<"     |    ";

        comment(fc[i]);
    }
    cout<<"\n";
    for(int j=1;j<=b;j++){
        float sum=0;
        for(int i=1;i<=a;i++){
            sum+=m[i][j];
        }
        cout<<"Average of assignment "<<j<<" : "<<(sum)/a;
        cout<<"\n";
    }

}