#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    system("chcp 1251");

    cout << "Введите сторону треугольника: \n";
    double a;
    cin >> a;

    double p = a * 3 / 2;

    double s = sqrt(p * (p - a) * (p - a) * (p - a));

    cout << "Площадь треугольника = " << s << endl;
    return 0;
}
