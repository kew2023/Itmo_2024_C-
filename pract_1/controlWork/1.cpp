#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    system("chcp 1251");
    int n = 5;
    double ay, by, cy, dy, fy, ax, bx, cx, dx, fx;
    double coords[7][2];

    for (int i = 1; i < 6; i++)
    {
        cout << "\nВведите сторону многоугольника в следующем формате: x y \n";
        cin >> coords[i][0];
        cout << "\n";
        cin >> coords[i][1];
    }
    coords[0][0] = coords[5][0];
    coords[0][1] = coords[5][1];
    coords[6][0] = coords[1][0];
    coords[6][1] = coords[1][1];

    cout << "\n";

    for (int i = 0; i < 7; i++)
    {
        cout << coords[i][0] << " " << coords[i][1] << endl;
    }

    double s = 0;

    for (int i = 1; i < 1 + n; i++)
    {
        s += coords[i][0] * (coords[i + 1][1] - coords[i - 1][1]);
    }

    s = abs(s / 2);

    cout << "Площадь многоугольника = " << s << endl;
    return 0;
}
