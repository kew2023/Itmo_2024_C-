#include <iostream>

using namespace std;

int main()
{
    double x, y;

    cout << "Enter x y: \n";
    cin >> x >> y;

    if (x * x + y * y < 9 && y > 0)
    {
        cout << "Point is in the circle";
    }
    else if (x * x + y * y > 9 || y < 0)
    {
        cout << "Point is not in the circle";
    }
    else
    {
        cout << "Point is on the circle border";
    }

    return 0;
}