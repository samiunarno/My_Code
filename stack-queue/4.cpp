4.You are given three kinds of parenthesis expressions. Write a function that returns the
longest balanced expression.

#include <iostream>
#include <stack>
using namespace std;

int max(string v)
{
    stack<int> stack;

    stack.push(-1);

    int len = 0;

    for (int i = 0; i < v.length(); i++)
    {
        if (v[i] == '(') {
            stack.push(i);
        }

        else {
            stack.pop();

            if (stack.empty())
            {
                stack.push(i);
                continue;
            }

            int curr_len = i - stack.top();

            if (len < curr_len) {
                len = curr_len;
            }
        }
    }

    return len;
}


int main()
{
    string v;
    int c;
    cout<<"Enter a Limit :";
    cin>>c;
    for(int i=1;i<=c;i++){
        cout<<"Enter a Balanced Paranthesis :";
        cin>>v;

        cout<<v<<"'s"<<" "<<"length is :"<<max(v);
    }



    return 0;
}




