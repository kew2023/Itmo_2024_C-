#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;
using Tuple = tuple<double, double, bool>;

Tuple solveQuadratic(double a, double b, double c)
{
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        return make_tuple(root1, root2, true);
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        return make_tuple(root, root, true);
    }
    else
    {
        return make_tuple(0.0, 0.0, false); // Нет вещественных корней
    }
}

int main()
{
    double a, b, c;

    cout << "Введите коэффициенты a, b и c для квадратного уравнения (ax^2 + bx + c = 0):\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "Это не квадратное уравнение.\n";
        return 1;
    }

    auto [root1, root2, hasRealRoots] = solveQuadratic(a, b, c);

    if (hasRealRoots)
    {
        if (root1 == root2)
        {
            cout << "Уравнение имеет один корень: x = " << root1 << endl;
        }
        else
        {
            cout << "Уравнение имеет два корня: x1 = " << root1 << ", x2 = " << root2 << endl;
        }
    }
    else
    {
        cout << "Уравнение не имеет вещественных корней." << endl;
    }

    return 0;
}
