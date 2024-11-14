#include <iostream>
#include <cmath>

using namespace std;

double squareTriangle(int a)
{
    return (sqrt(3) / 4) * pow(a, 2);
}

double squareTriangle(int a, int b, int c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    int a, b, c, n;

    cout << "select type of triangle" << endl;

    cout << "1 - equilateral" << endl; // Равносторонний
    cout << "2 - isosceles" << endl;   // Разносторонний

    cin >> n;

    if (n == 1)
    {
        cout << "a = ";
        cin >> a;
        cout << "square = " << squareTriangle(a) << endl;
    }
    else if (n == 2)
    {
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
        cout << "square = " << squareTriangle(a, b, c) << endl;
    }

    return 0;
}