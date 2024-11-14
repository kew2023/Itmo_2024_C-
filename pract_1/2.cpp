#include <iostream>

using namespace std;
int main()
{

    system("chcp 1251");

    string name;
    cout << "Введите свое имя \n";

    double a, b;
    cout << "Введите a и b: \n";
    cin >> a; // ввод a
    cin >> name;
    cin >> b; // ввод b

    double x = a / b;              // вычисление x
    cout << "\nx = " << x << endl; // вывод
    cout << "Привет, " << name << "!\n";
    return 0;
}
