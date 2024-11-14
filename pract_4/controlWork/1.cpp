#include <iostream>
#include <cmath>
using namespace std;

int Myroot(double, double, double, double &, double &);

int Myroot(double a, double b, double c, double &x1, double &x2)
{
    double D = b * b - 4 * a * c;

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        return 1;
    }
    else if (D == 0)
    {
        x1 = x2 = -b / (2 * a);
        return 0;
    }

    return -1;
}

int main()
{
    double x1, x2;
    double a, b, c;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    double res = Myroot(a, b, c, x1, x2);

    if (res == 1)
    {
        cout << "x1 = " << x1 << " x2 = " << x2 << endl;
    }
    else if (res == 0)
    {
        cout << "x = " << x1 << endl;
    }
    else
    {
        cout << "No roots" << endl;
    }

    return 0;
}
