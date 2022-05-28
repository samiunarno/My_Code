#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char string2[20];
    int i, string_length;
    int flag = 0;
    cout << "Enter the input string: "; cin >> string2;
    string_length =strlen(string2);
    for(i=0;i < string_length ;i++){
        if(string2[i] != string2[string_length-i-1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << string2 << " is not a palindrome" << endl;
    }
    else {
        cout << string2 << " is a palindrome" << endl;
    }
    return 0;
}
