#include <iostream>

using namespace std;
int main()
{

    system("chcp 1251");

    string name;
    cout << "������� ���� ��� \n";

    double a, b;
    cout << "������� a � b: \n";
    cin >> a; // ���� a
    cin >> name;
    cin >> b; // ���� b

    double x = a / b;              // ���������� x
    cout << "\nx = " << x << endl; // �����
    cout << "������, " << name << "!\n";
    return 0;
}
