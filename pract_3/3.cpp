#include <iostream>
#include <cmath>
#include <string>

using namespace std;

long double firBinSearch(double a, int n)
{
    double L = 0;
    double R = a;

    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a)
        {
            L = M;
        }
        else
        {
            R = M;
        }
    }

    return R;
}

int main()
{
    double a;
    int n;

    cout << "a = ";
    cin >> a;

    cout << endl;

    cout << "n = ";
    cin >> n;

    cout << "a ^ (-n) = " << firBinSearch(a, n) << endl;

    return 0;
}