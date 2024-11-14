#include <iostream>
#include <cmath>

using namespace std;

struct QuadraticSolution
{
    double root1;
    double root2;
};

QuadraticSolution solveQuadratic(double a, double b, double c)
{
    QuadraticSolution solution;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        solution.root1 = (-b + sqrt(discriminant)) / (2 * a);
        solution.root2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0)
    {
        solution.root1 = solution.root2 = -b / (2 * a);
    }
    else
    {
        solution.root1 = solution.root2 = nan(""); // Устанавливаем NaN, если нет вещественных корней
    }

    return solution;
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

    QuadraticSolution result = solveQuadratic(a, b, c);

    if (isnan(result.root1) && isnan(result.root2))
    {
        cout << "Уравнение не имеет вещественных корней." << endl;
    }
    else if (result.root1 == result.root2)
    {
        cout << "Уравнение имеет один корень: x = " << result.root1 << endl;
    }
    else
    {
        cout << "Уравнение имеет два корня: x1 = " << result.root1 << ", x2 = " << result.root2 << endl;
    }

    return 0;
}
