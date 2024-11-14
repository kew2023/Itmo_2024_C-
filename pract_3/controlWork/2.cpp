#include <iostream>
#include <cmath>

using namespace std;

long double cubeRoot_pow(long double a)
{
    return pow(a, 1.0 / 3);
}

long double cubeRoot(long double a)
{
    long double x_i1 = a;
    long double x_i = 0;

    while (true)
    {
        x_i = (1.0 / 3) * (a / (x_i1 * x_i1) + 2 * x_i1);
        if (abs(x_i - x_i1) < 1e-10)
        {
            break;
        }
        x_i1 = x_i;
    }

    return x_i;
}

int main()
{
    int n;
    cout << "Input number: " << endl;
    cin >> n;

    cout << cubeRoot_pow(n) << endl;
    cout << cubeRoot(n) << endl;

    return 0;
}