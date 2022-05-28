#include <iostream>

using namespace std;

bool comparef(float x, float y, float epsilon = 0.01f)

{

    if (abs(x - y) < epsilon)

        return true;

    return false;

}

void breakFloating(float f, int *intPart, int *fracPart)

{

    *intPart = (int)f;

    float fl = f - *intPart;

    while (true)

    {

        fl = fl * 10;

        *fracPart = (int)fl;

        if (comparef(fl, *fracPart))

        {

            break;

        }

    }

}

int main()

{

    float f;

    cin >> f;

    int intPart = 0;

    int fracPart = 0;

    breakFloating(f, &intPart, &fracPart);

    cout << "Array1:" << intPart << " and Array2: " << fracPart << endl;

    return 0;

}
