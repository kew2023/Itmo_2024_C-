#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, temp;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    cout << "НОД = " << a << endl;
    return 0;
}